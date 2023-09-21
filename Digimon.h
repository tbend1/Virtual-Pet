#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"

class Digimon : public VirtualPet
{
	private:
		string element;

	public:
		Digimon(const string& name, const string& element);
		string getElement() const;
		void useSpecialAttack();


};



#endif
