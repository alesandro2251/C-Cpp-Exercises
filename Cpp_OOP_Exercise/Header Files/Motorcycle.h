#pragma once
#include "Vehicle.h"
class Motorcycle : public Vehicle
{
public:
    Motorcycle(int y, int enId, int enKil);
    std::string stop();
};
