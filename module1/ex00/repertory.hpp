#ifndef REPERTORY_HPP
#define REPERTORY_HPP

#include <string>
#include <iostream>

typedef  std::string str;

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);



#endif