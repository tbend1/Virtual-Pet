#ifndef PIKACHU_H
#define PIKACHU_H

#include "Pokemon.h"

class Pikachu : public Pokemon
{
	private:
		int electricPower;

	public:
		Pikachu(const string& name);
		void useElectricShock();


};



#endif
