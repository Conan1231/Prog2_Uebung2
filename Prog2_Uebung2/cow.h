#pragma once
#include "animal.h"
class cow :
    public animal
{
public:
    cow(string name, int idNum, double startweight, double price);
    ~cow();

    void feed(double amount);
    void articulate();

    int produce_milk();
};

