#ifndef GATOMON_H
#define GATOMON_H

#include "Digimon.h"

class Gatomon : public Digimon
{
	private:
		int catClawSharpness;
	
	public:
		Gatomon(const string& name, const string& element);
		void useCatClawAttack();
};	
	

#endif
