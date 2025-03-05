#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat constructor called" << std::endl;
  this = "Cat";
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
  std::cout << "Cat copy constructor called" << std::endl;
  *this = cat;
}

Cat::Cat& operator=(const Cat &cat)
{
  std::cout << "Cat assignation operator called" << std::endl;
  if (this != &cat)
  {
    *this = cat;
  }
  return *this;
}

void Cat::makeSound() const
{
  std::cout << "Meow meow" << std::endl;
}