#pragma once

#include "animal.h"
#include <string>
using namespace std;

class Animaljungle {
private:
    static const int MAX_ANIMALS = 100;
    Animal animals[MAX_ANIMALS];
    int animalCount;

public:
    Animaljungle();

    void addAnimal(const Animal& newAnimal);
    void removeAnimalByName(const string& animalName);
    void findAnimal(const string& animalName) const;
    void displayAllAnimals() const;
};
