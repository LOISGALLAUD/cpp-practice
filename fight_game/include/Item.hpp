#ifndef ITEM_HPP
#define ITEM_HPP
#include <iostream>
#include <string>
class Item
{
  public:
    virtual ~Item() = default;
    Item(std::string name);
    virtual void displayInfo() = 0;
    std::string getName() const;

  protected:
    std::string name;
};
#endif
