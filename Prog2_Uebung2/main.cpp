#include <iostream>
#include <exception>
#include <string>
#include <stdlib.h>

#include "animal.h"
#include "cat.h"
#include "cow.h"
#include "chicken.h"


using namespace std;

int animal::currentMaxNumber = 0;

const int MAX = 100;        // Ausnahmsweise 
void printAvailableAnimals(animal* animals[]) {
	cout << "### Available animals ###" << endl;
	for (int i = 0; i < MAX; i++) {
		if (animals[i] != nullptr) {
			cout << "(" << i + 1 << ") - "; animals[i]->articulate();
		}
	}
	cout << "### End of the available animals ###" << endl;
}

int main(int argc, char* argv[]){
	/*
	animal* animal = new cat("Armani", 1, 20.3, 23);
	animal->articulate();
	*/

	// list of animals

	animal* animals[MAX];
	for (int i = 0; i < MAX; i++) {
		animals[i] = nullptr;
	}

	// event loop
	int option = 0;
	int animalspecies = 0;
	int option2 = 0;
	int option3 = 0;

	while (1 == 1) {
		cout << "###" << endl;
		cout << "What is your demand? :" << endl;  // "Was m\x94 \bchten Sie tun? :"
		cout << "1. Buy an animal" << endl;
		cout << "2. Feed an animal" << endl;
		cout << "3. Sell an animal" << endl;
		cout << "4. Articulate all animals" << endl;
		cout << "5. Exit" << endl;
		cout << "###" << endl;

		cin >> option;

		switch (option) {
		case 1: {
			// Buy
			double price = 0.0;
			double startweight = 0.0;
			string name = "";

			cout << "### Buy Animal ###" << endl;
			cout << "Animalspecies: " << endl;
			cout << "1 = Chicken, 2 = Cat, 3 = Cow" << endl;
			cout << "Species: "; cin >> animalspecies;
			cout << "Weight (double): "; cin >> startweight;
			cout << "Price (double): "; cin >> price;
			cout << "Name (string): "; cin >> name;

			int pos = animal::getCurrentMaxNumber();
			switch (animalspecies) {
			case 1: {
				// Chicken
				animals[pos] = new chicken(name, pos, startweight, price);
				break;
			}
			case 2: {
				// Cat
				animals[pos] = new cat(name, pos, startweight, price);
				break;
			}
			case 3: {
				// Cow
				animals[pos] = new cow(name, pos, startweight, price);
				break;
			}

			}	// End of Species
			animal::incCurrentMaxNumber();
			break;
			} // End of Buy
		case 2: {
			// feed
			int amount = 0;
			cout << "### Feed Animal ###" << endl;
			printAvailableAnimals(animals);
			cout << "Choose your animal to feed: ";
			cin >> option2;
			cout << "How much?(kg): ";
			cin >> amount;
			
			option2--;

			if (animals[option2] == nullptr) {
				cout << "Fehler" << endl;
			}
			else {
				animals[option2]->feed(amount);
			}
				
			break;
		}
		case 3: {
			// sell animal
			cout << "### Sell animal ###" << endl;
			printAvailableAnimals(animals);
			cout << "Choose your animal Id to sell";
			cin >> option3;
			delete animals[option3 - 1];
			animals[option3 - 1] = nullptr;
			break;

		}
		case 4: {
			// Articulate all animals
			printAvailableAnimals(animals);
			break;
		}
		case 5: {
			cout << "Goodbye Farmer!";
			for (int i = 0; i < MAX; i++) {
				if (animals[i] != nullptr) {
					delete animals[i];
					animals[i] = nullptr;
				}
			}
			_CrtDumpMemoryLeaks();
			exit(0);
			// alle verkaufen(tier);
			 
		}
		}
		
	}
}