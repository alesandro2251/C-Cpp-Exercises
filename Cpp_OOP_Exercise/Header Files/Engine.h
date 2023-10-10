#pragma once

class Engine {
public:
    Engine(); // constructor
    Engine(int i, int kil); // constructor with params
    ~Engine(); // destructor
    int getId();          // method
    int getKilometers();   // method
    void increaseKilometers();  // method
private:
    int id;
    int kilometers;
};
