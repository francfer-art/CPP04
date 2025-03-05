#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog constructor called" << std::endl;
  type = "Dog";
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
  std::cout << "Dog copy constructor called" << std::endl;
  *this = dog;
}

Dog::Dog& operator=(const Dog &dog)
{
  std::cout << "Dog assignation operator called" << std::endl;
  if (this != &dog)
  {
    *this = dog
  }
  return *this;
}

void Dog::makeSound() const
{
  std::cout << "Woof woof" << std::endl;
}