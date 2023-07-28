/*
Exercice Etudiants et gestion d'étudiants
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Etudiant {
    public:
        Etudiant(int numero_etudiant, vector<int> notes):
            numero_etudiant(numero_etudiant), notes(notes) {cout << repr() << " created" << endl;}
        ~Etudiant() {cout << repr() << " deleted" << endl;}
        string repr(void) const {
            return "Etudiant(" + to_string(numero_etudiant) + ")";
        }
        int getNumeroEtudiant(void) const {return numero_etudiant;};
        vector<int> getNotes(void) const {return notes;};
    private:
        int numero_etudiant;
        vector<int> notes;
};

class GroupeEtudiants {
    public:
        GroupeEtudiants() {cout << repr() << " created" << endl;}
        ~GroupeEtudiants() {cout << repr() << " deleted" << endl;}
        string repr(void) {
            return "GroupeEtudiants()";
        }
        void ajouter(Etudiant* e) {
            cout << "Ajout de " << e->repr() << endl;
            etudiants.push_back(e);
        }
        void afficher() const {
            cout << "Affichage du groupe d'étudiants: " << endl;
            for (Etudiant* e : etudiants) {
                cout << e->repr() << endl;
            }
        }
        Etudiant* rechercher(int numero_etudiant) const {
            cout << "Recherche de " << numero_etudiant << endl;
            for (Etudiant* e : etudiants) {
                if (e->getNumeroEtudiant() == numero_etudiant) {
                    return e;
                }
            }
            return NULL;
        }
        double moyenne() const {
            vector<double>* notesVector = new vector<double>();
            double moyenne = 0.0;
            for (Etudiant* e : etudiants) {
                vector<int> notes = e->getNotes();
                for (int note : notes) {
                    notesVector->push_back(static_cast<double>(note));
                }
            }
            for (double note : *notesVector) {
                moyenne += note;
            }
            double result = moyenne / notesVector->size();
            delete notesVector; // Libérer la mémoire allouée dynamiquement
            return result;
        }

    private:
        vector<Etudiant*> etudiants;
};

int main(void) {
    Etudiant* e = new Etudiant(123456, {12, 14, 16});
    Etudiant* e2 = new Etudiant(123457, {10, 20, 12});
    Etudiant* e3 = new Etudiant(123458, {8, 9, 10});
    GroupeEtudiants* groupe = new GroupeEtudiants();
    groupe->ajouter(e);
    groupe->ajouter(e2);
    groupe->ajouter(e3);
    groupe->afficher();
    Etudiant* e4 = groupe->rechercher(123457);
    cout << e4->repr() << endl;

    cout << "Moyenne du groupe: " << groupe->moyenne() << endl;
    delete e;
    delete e2;
    delete e3;
    delete groupe;
    return 0;
}