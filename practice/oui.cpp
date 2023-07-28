
class Personnage {
    public:
        virtual ~Personnage() = default;
        virtual void attaquer(Personnage& cible) = 0;
        virtual void afficherInfos() const {
            std::cout << "Name: " << nom << std::endl;
            std::cout << "Class: " << nomClasse << std::endl;
            std::cout << "HP: " << sante << std::endl;
            std::cout << "SP: " << vitesse << std::endl;
            std::cout << "STR: " << force << std::endl;
            std::cout << "MAG: " << magie << std::endl;
            std::cout << "--------------------------" << std::endl;
        };
        virtual void recevoirDegats(int degats) {
            sante -= degats;
            if (sante < 0) {
                sante = 0;
            }
        };
        virtual void utiliserPotionDeVie(int quantitePotion) {
            sante += quantitePotion;
        };
        virtual bool estVivant() const {
            return sante > 0;
        };
        virtual std::string getNom() const {
            return nom;
        };
    protected:
        int sante = 100;
        int vitesse = 10;
        int force = 10;
        int magie = 10;
        std::string nom;
        std::string nomClasse;
        Personnage(int sante, int vitesse, int force, int magie, std::string nom, std::string nomClasse)
        : sante(sante), vitesse(vitesse), force(force), magie(magie), nom(nom), nomClasse(nomClasse) {
            std::cout << "Création de " << nom << " de classe " << nomClasse << std::endl;
        }
};

class Guerrier : public Personnage {
    public:
        Guerrier(std::string nom): Personnage(100, 100, 15, 0, nom, "Guerrier") {}
        void attaquer(Personnage& cible) override {
            std::cout << nom << " attaque " << cible.getNom() << " avec son épée!" << std::endl;
            cible.recevoirDegats(force);
        }
};