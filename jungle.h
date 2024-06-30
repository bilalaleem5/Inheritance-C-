#pragma once

#include "animal.h"

#include <string>

using namespace std;

class Animaljungle {

private:

    static const int MAX_ANIMALS = 100; // Maximum number of animals in the sanctuary

    Animal animals[MAX_ANIMALS];  // Array to store animals
    int animalCount;  // Current count of animals in the sanctuary

public:

    Animaljungle();

   
	// Function to add an animal to the sanctuary
    void addAnimal(const Animal& newAnimal);
   
	// Function to remove an animal by name
    void removeAnimalByName(const string& animalName);

	// Function to find an animal by name and display its info
    void findAnimal(const string& animalName) const;

// Function to display information about all animals in the sanctuary
    void displayAllAnimals() const;
};
