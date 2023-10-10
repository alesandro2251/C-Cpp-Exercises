#include "../Header Files/Auto.h"

Auto::Auto(int tireCount, int y, float mS, int enId, int enKil) : Vehicle(y, mS,
                                                                          enId, enKil) {
    this->tireCount = tireCount;
    initializeTires();
}

void Auto::initializeTires() {
    tires = new Tire *[this->tireCount];
    for (size_t i = 0; i < this->tireCount; i++) {
        tires[i] = new Tire(i);
    }
}

Auto::~Auto() {
    for (size_t i = 0; i < this->tireCount; i++) {
        delete tires[i];
    }
    delete tires;
}

std::string Auto::drive() {
    std::string result = "Drun Drun";
    return result;
}
