#include "cow.h"

cow::cow(string name, int idNum, double startweight, double price) : animal(name, idNum, startweight, price)
{
	this->animalspecies = "Cow";
}

cow::~cow() {

}

void cow::articulate() {
	cout << "###" << endl;
	cout << "Hello Farmer" << endl;
	cout << "My name is: " << this->name << ", idNr: " << getNumber() << ", weight: " << this->weight << " kg " << "and was bought: " << this->birth << endl;
	cout << "I'm a " << this->animalspecies << " and I produce " << this->produce_milk() << " liter milk per Day." << endl;
	cout << "###" << endl;
}

void cow::feed(double amount) {
	double fat_current = this->weight;
	double fat_new = fat_current + 0.05 * amount;
	this->weight = fat_new;
}

int cow::produce_milk() {
	return (this->weight / 10);
}