#include "Pikachu.h"



//Constructor that intitialized health, name, species, and electricPower
//I thought it made more sense to do the species name as Pikachu and not have that based on input
Pikachu::Pikachu(const string& name) : Pokemon(name, "Pikachu")
{
	//health is initialized in parent constructor
	electricPower = 100;
}

//Function that simulates Pikachu using an attack, if the electric power is below 10, Pikachu will recharge
void Pikachu::useElectricShock()
{
	if(electricPower >= 10)
	{
		cout << getName() << " used Electric Shock" << endl;
		electricPower -= 10;
		cout << "Remaining electric power: " << electricPower << endl;
	}
	else
	{
		cout << getName() << " has no more electric power, recharging" << endl;
		electricPower += 10;

	}
}
