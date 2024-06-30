#include "animal.h"

Animaljungle::Animaljungle() {
    animalCount = 0; 
}

void Animaljungle::addAnimal(const Animal& newAnimal) {
    if (animalCount < MAX_ANIMALS) {
        animals[animalCount] = newAnimal;
        animalCount++;
    }
}

void Animaljungle::removeAnimalByName(const std::string& animalName) {
    for (int i = 0; i < animalCount; i++) {
        if (animals[i].getAnimalName() == animalName) {
            for (int j = i; j < animalCount - 1; j++) {
                animals[j] = animals[j + 1];
            }
            animalCount--;
            break;
        }
    }
}

void Animaljungle::findAnimal(const std::string& animalName) const {
    for (int i = 0; i < animalCount; i++) {
        if (animals[i].getAnimalName() == animalName) {
            animals[i].displayAnimalInfo();
            break;
        }
    }
}

void Animaljungle::displayAllAnimals() const {
    for (int i = 0; i < animalCount; i++) {
        animals[i].displayAnimalInfo();
    }
}
