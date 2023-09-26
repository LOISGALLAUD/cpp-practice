#ifndef ITEM_HPP
#define ITEM_HPP
#include <iostream>
#include <string>
class Item
{
  public:
    virtual ~Item();
    Item(std::string name, size_t rarity, int price);
    virtual void displayInfo() = 0;
    std::string getName() const;

  protected:
    std::string name;
    size_t rarity = 0;
    int price;
};
#endif
