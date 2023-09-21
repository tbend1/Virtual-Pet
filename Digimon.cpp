#include "Digimon.h"


//constructor that initialized name and the element
Digimon::Digimon(const string& name, const string& elem) : VirtualPet(name)
{
	//happiness and hunger should be initialized thru the parent
	element = elem;
}

//function that simulates a "Special Attack" being used
void Digimon::useSpecialAttack()
{
	cout << getName() << " used a(n) " << element << " attack" << endl;
}

//returns element
string Digimon::getElement() const
{
	return element;
}
