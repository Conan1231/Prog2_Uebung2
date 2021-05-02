#define _CRT_SECURE_NO_WARNINGS

#include "animal.h"
#include <ctime>

animal::animal(string tname, int idNum, double startweight, double price)
	: name(tname), idNum(idNum + 1), price(price), weight(startweight)
{
	time_t erg = time(NULL);
	this->birth = asctime(localtime(&erg));
	this->animalspecies = "";
}

animal::~animal() 
{

}