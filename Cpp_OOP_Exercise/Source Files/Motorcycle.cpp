#include "../Header Files/Motorcycle.h"
Motorcycle::Motorcycle(int y, int enId, int enKil) : Vehicle(y, 300, enId, enKil)
{ }
std::string Motorcycle::stop()
{
    std::string result = Vehicle::stop();
    return result + " Dzz";
}
