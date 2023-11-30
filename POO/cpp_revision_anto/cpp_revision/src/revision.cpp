//--------------------Q1----------------//

//Un patron de fonction en C++ (function template) est une fonction 
//générique qui peut être utilisée avec différents types de données. 
//Il est défini à l'aide du mot-clé template suivi de la déclaration de la fonction, 
//avec un ou plusieurs paramètres de type générique.

//La force des templates est d'autoriser une fonction ou une classe à utiliser des types différents. 
//Leur marque de fabrique est la présence des chevrons < et >  .

//--------------------Q2----------------//

//En C++, un pointeur est une variable qui stocke l'adresse mémoire d'une autre variable, déclaré avec l'opérateur *. 
//Il peut être réaffecté et peut être nul.
//Une référence, déclarée avec l'opérateur &, est un alias pour une variable existante. 
//Elle doit être initialisée lors de la déclaration, ne peut pas être réaffectée, et ne peut pas être nulle.

class MaClasse {
public:
    // Autres membres de la classe...

    // Constructeur de copie
    MaClasse();
    MaClasse(const MaClasse &autre); // prototype du constructeur de recopie
};
