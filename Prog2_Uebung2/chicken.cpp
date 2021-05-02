#include "chicken.h"


chicken::chicken(string name, int idNum, double startweight, double price) : animal(name, idNum, startweight, price)
{
	this->animalspecies = "Chicken";
}

chicken::~chicken() {

}

void chicken::articulate()
{
	cout << "###" << endl;
	cout << "Hello Farmer" << endl;
	cout << "My name is: " << this->name << ", idNr: " << getNumber() << ", weight: " << this->weight << " kg " << "and was bought: " << this->birth << endl;
	cout << "I'm a " << this->animalspecies << " and I lay " << this->laying_egg() << " egg(s) per Day." << endl;
	cout << "###" << endl;
}

void chicken::feed(double amount)
{
	double fat_current = this->weight;
	double fat_new = fat_current + 0.25 * amount;
	this->weight = fat_new;
}

int chicken::laying_egg() {
	return (this->weight / 3);
}