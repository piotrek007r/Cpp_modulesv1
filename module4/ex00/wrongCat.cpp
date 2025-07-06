#include "wrongCat.hpp"
#include "wrongAnimal.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
        this->type = other.type;    
    std::cout << "WrongCat copy assign operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "meeeeow!" << std::endl;
}




