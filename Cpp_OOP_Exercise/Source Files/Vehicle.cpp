#include "../Header Files/Vehicle.h"
Vehicle::Vehicle(int y, float mS, int enId, int enKil)
{
    this->year = y;
    this->maxSpeed = mS;
    this->engine = new Engine(enId, enKil);
}
Vehicle::~Vehicle()
{
    delete this->engine;
}
std::string Vehicle::drive()
{
    std::string result = "Brum";
    this->engine->increaseKilometers();
    return result;
}
std::string Vehicle::stop()
{
    std::string result = "Stop";
    return result;
}
int Vehicle::getMaxSpeed()
{
    return this->maxSpeed;
}
int Vehicle::getYear()
{
    return this->year;
}
int Vehicle::getKilometers()
{
    return this->engine->getKilometers();
}
