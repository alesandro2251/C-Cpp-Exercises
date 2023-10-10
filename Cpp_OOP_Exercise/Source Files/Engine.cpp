#include "../Header Files/Engine.h"

Engine::Engine() {
    this->id = 0;
    this->kilometers = 0;
}

Engine::Engine(int i, int kil) {
    this->id = i;
    this->kilometers = kil;
}

Engine::~Engine() {
}

int Engine::getId() {
    return this->id;
}

int Engine::getKilometers() {
    return this->kilometers;
}

void Engine::increaseKilometers() {
    this->kilometers++;
}

