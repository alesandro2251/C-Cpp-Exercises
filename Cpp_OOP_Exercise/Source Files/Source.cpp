#include "../Header Files/Vehicle.h"
#include "../Header Files/Auto.h"
#include "../Header Files/Motorcycle.h"
#include <iostream>

int main(int argc, char **args) {
    Vehicle *fiat = new Auto(4, 2012, 120, 4, 120000);
    Vehicle *simson = new Motorcycle(1980, 100, 300000);
    std::cout << "Fiat Kilometers: " << fiat->getKilometers() << std::endl;
    std::cout << "Fiat Drive: " << fiat->drive() << std::endl;
    std::cout << "Fiat Kilometers: " << fiat->getKilometers() << std::endl;
    std::cout << "Simson Kilometers: " << simson->getKilometers() << std::endl;
    std::cout << "Simson Drive: " << simson->drive() << std::endl;
    std::cout << "Simson Kilometers: " << simson->getKilometers() << std::endl;
    return 0;
}
