#ifndef WIZARD_HPP
#define WIARD_HPP
#include "Character.hpp"
#include <string>
#include <iostream>
class Wizard : public Character {
    public:
        Wizard(std::string name);
        void attack(Character& target) override;
};
#endif