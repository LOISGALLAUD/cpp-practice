#ifndef KNIGHT_HPP
#define KNIGHT_HPP
#include "Character.hpp"
#include <string>
#include <iostream>
class Knight : public Character {
    public:
        Knight(std::string name);
        void attack(Character& target) override;
};
#endif