#include "Gatomon.h"

//constructor that initializes name element and claw sharpness
//it could be better to name element something specific for Gatomon and not based on input, but I don't know what element Gatomon would have, so I just left it as is.
Gatomon::Gatomon(const string& name, const string& element) : Digimon(name, element)
{
	//like it's parent, happiness and hunger should be initialized thru the parent
	catClawSharpness = 100;
}

//function that simulates a claw attack, if clawSharpness is less than ten, then the claws will 'Sharpen' and be able to be used next time.
void Gatomon::useCatClawAttack()
{
	if(catClawSharpness >= 10)
	{
		cout << getName() << " is using Cat Claw Attack." << endl;
		catClawSharpness -= 10;
		cout << "Claw Sharpness: " << catClawSharpness << endl;
	}
	else
	{
		cout << getName() << "'s claws aren't sharp enough, sharpening claws" << endl;
		catClawSharpness += 10;
	}
}
