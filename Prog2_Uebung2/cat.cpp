#include "cat.h"


cat::cat(string name, int idNum, double startweight, double price) : animal(name,idNum,startweight, price)
{
	this->animalspecies = "Cat";
}

cat::~cat()
{

}

int cat::catchmice()
{
	// fat cats catch less mice
	double NormalCatch = 4.0;
	double RealCatch = NormalCatch;
	double IdealWeight = 4.0;

	// pro kg Koerpergewicht faengt die Katze ein Viertel weniger Mauese
	if (this->weight > IdealWeight) {
		for (int i = this->weight; i > IdealWeight; i--) {
			RealCatch = RealCatch - RealCatch * 0.25;
		}
	}
	return (int) RealCatch;
}

void cat::articulate()
{
	cout << "###" << endl;
	cout << "Hello Farmer" << endl;
	cout << "My name is: " << this->name << ", idNr: " << getNumber() << ", weight: " << this->weight << " kg " << "and was bought: " << this->birth << endl;  // "Ich hei\xe1 \be: "
	cout << "I'm a " << this->animalspecies << " and I catch " << this->catchmice() << " Mice per Day." << endl;
	cout << "###" << endl;
}

void cat::feed(double amount)
{
	double fat_current = this->weight;
	double fat_new = fat_current + 0.15 * amount;
	this->weight = fat_new;
}

