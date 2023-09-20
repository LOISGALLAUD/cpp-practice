#ifndef GOLEM_HPP
#define GOLEM_HPP
#include "Character.hpp"
#include <string>
#include <iostream>
class Golem : public Character {
    public:
        Golem(std::string name);
        void attack(Character& target) override;
};
#endif