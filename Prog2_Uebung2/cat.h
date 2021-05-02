#pragma once
#include "animal.h"
class cat :
    public animal
{
public:
    cat(string name, int idNum, double startweight, double price);
    ~cat();

    void feed(double amount);
    void articulate();

    int catchmice();
};

