#include "VirtualPet.h"
#include "Pokemon.h"
#include "Pikachu.h"
#include "Digimon.h"
#include "Gatomon.h"

int main() {

	/*
	Before Assignment 7:
	
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;
	*/

	//Assignment 7:
	Pikachu pika("Bob");
	Digimon digiBoy("DigiBoy", "Fire");
	Gatomon gato("Gatoman", "Claws");
	
	cout << "Pikachu:" << endl;

	cout << "Name: " << pika.getName() << endl;
	cout << "Species: " << pika.getSpecies() << endl;

	pika.useElectricShock();

	cout << endl << endl << "Digimon:" << endl;

	cout << "Name: " << digiBoy.getName() << endl;
	cout << "Element: " << digiBoy.getElement() << endl;
	cout << "Happiness: " << digiBoy.getHappiness() << endl;
	cout << "Hunger: " << digiBoy.getHunger() << endl;

	digiBoy.useSpecialAttack();

	cout << endl << endl << "Gatomon:" << endl;
	cout << "Name: " << gato.getName() << endl;
	cout << "Element: " << gato.getElement() << endl;
	cout << "Happiness: " << gato.getHappiness() << endl;
	cout << "Hunger: " << gato.getHunger() << endl;
	
	gato.useCatClawAttack();


	return 0;
}
