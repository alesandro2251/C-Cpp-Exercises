#pragma once
#include "Engine.h"
#include <iostream>
class Vehicle
{
public:
    Vehicle(int y, float mS, int enId, int enKil);
    ~Vehicle();
    int getYear();
    int getMaxSpeed();
    int getKilometers();
    std::string drive();
    std::string stop();
private:
    Engine* engine;
    int year;
    float maxSpeed;
};