#include "repertory.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie;

	zombie.setName(name);
	zombie.announce();
}