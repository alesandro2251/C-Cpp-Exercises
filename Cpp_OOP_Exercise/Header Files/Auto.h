#pragma once

#include "Vehicle.h"
#include "Tire.h"

class Auto : public Vehicle {
public:
    Auto(int tireCount, int y, float mS, int enId, int enKil);

    ~Auto();

    std::string drive();

private:
    Tire **tires;
    int tireCount;

    void initializeTires();
};
