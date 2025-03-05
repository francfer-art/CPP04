#include "Animal.hpp"

Animal::Animal()
{
  std::cout << "Animal default constructor called" << std::endl;
  this->type = "Animal";
}

Animal::Animal(std::string type)
{
  std::cout << "Animal type constructor called" << std::endl;
  this->type = type;
}
Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
  std::cout << "Animal copy constructor called" << std::endl;
  *this = animal;
}

Animal& Animal::operator=(const Animal &animal)
{
  std::cout << "Animal assignation operator called" << std::endl;
  if (this != &animal)
  {
    *this = animal;
  }
  return *this;
}

void Animal::makeSound() const
{
  std::cout << "Animal sound!" << std::endl;
}