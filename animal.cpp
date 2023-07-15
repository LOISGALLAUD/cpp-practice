/*
Exercice sur l'abstraction avec la classe animal.
*/

#include <iostream>

class Animal
{
public:
    virtual ~Animal() = default;
    virtual void parler() = 0;
};

class Chien : public Animal
{
public:
    void parler() override
    {
        std::cout << "Wouf wouf" << std::endl;
    }
    void aboyer()
    {
        std::cout << "J'aboie" << std::endl;
    }
};

class Chat : public Animal
{
public:
    void parler() override
    {
        std::cout << "Miaou miaou" << std::endl;
    }
    void griffer()
    {
        std::cout << "Je griffe" << std::endl;
    }
};

int main()
{
    Animal *animal = new Chien();
    animal->parler();

    Chien *chien = dynamic_cast<Chien *>(animal); // Conversion de type
    if (chien)
    {
        chien->aboyer(); // Utilisation de la méthode spécifique à Chien
    }
    delete animal;

    animal = new Chat();
    animal->parler();

    Chat *chat = dynamic_cast<Chat *>(animal); // Conversion de type
    if (chat)
    {
        chat->griffer(); // Utilisation de la méthode spécifique à Chat
    }
    delete animal;

    return 0;
}