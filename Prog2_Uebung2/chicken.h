#pragma once
#include "animal.h"
class chicken :
    public animal
{
public:
    chicken(string name, int idNum, double startweight, double price);
    ~chicken();

    void feed(double amount);
    void articulate();

    int laying_egg();
};

