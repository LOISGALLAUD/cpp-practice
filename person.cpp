/*
Exercice classe Person
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
    public:
        Person(string nom, string prenom, int age):
            nom(nom), prenom(prenom), age(age) {cout << "Constructor done" << endl;}
        ~Person() {cout << "Destructor done" << endl;}
        string repr() {
            return "Person(" + nom + ", " + prenom + ", " + to_string(age) + ")";
        }
        string getNom() {return nom;}
        string getPrenom() {return prenom;}
        int getAge() {return age;}
    private:
        string nom;
        string prenom;
        int age;
};

class CarnetContacts {
    public:
        CarnetContacts() {cout << "Constructor done" << endl;}
        ~CarnetContacts() {cout << "Destructor done" << endl;}
        void ajouter(Person* p) {
            cout << "Ajout de " << p->repr() << endl;
            contacts.push_back(p);
        }
        void afficher() {
            cout << "Affichage du carnet de contacts: " << endl;
            for (Person* p : contacts) {
                cout << p->repr() << endl;
            }
        }
        Person* rechercher(string nom) {
            cout << "Recherche de " << nom << endl;
            for (Person* p : contacts) {
                if (p->getNom() == nom) {
                    return p;
                }
            }
            return NULL;
        }
    private:
        vector<Person*> contacts;
};

int main(void) {
    Person* p = new Person("Doe", "John", 42);
    Person* p2 = new Person("Doe", "Jane", 40);
    Person* p3 = new Person("Gallaud", "Loïs", 19);
    CarnetContacts* carnet = new CarnetContacts();
    carnet->ajouter(p);
    carnet->ajouter(p2);
    carnet->ajouter(p3);
    carnet->afficher();
    Person* p4 = carnet->rechercher("Doe");
    cout << p4->repr() << endl;
    carnet->afficher();
    delete carnet;
    delete p;
    delete p2;
    delete p3;
}