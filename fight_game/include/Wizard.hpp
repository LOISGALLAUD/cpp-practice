#ifndef WIZARD_HPP
#define WIZARD_HPP
#include "Character.hpp"
#include <iostream>
#include <string>
class Wizard : public Character
{
  public:
    Wizard(std::string name);
    void attack(Character &target) override;
};
#endif
