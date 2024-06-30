#include "animal.h"
#include <iostream>
using namespace std;

int Animal::totalAnimals = 0; //totalanimal to zero

Animal::Animal() : name(""), speciesID(0), age(0), adoptable(true) {
    totalAnimals++;
}

Animal::Animal(std::string animalName, int species, int animalAge)
    : name(animalName), speciesID(species), age(animalAge), adoptable(true) {
    totalAnimals++;
}

Animal::Animal(const Animal& other)
    : name(other.name), speciesID(other.speciesID), age(other.age), adoptable(other.adoptable) {
    if (this != &other) {
        totalAnimals++;
    }
}

Animal::~Animal() {
    totalAnimals--;
}

bool Animal::isAvailableForAdoption() const {
    return adoptable;
}

void Animal::setUnavailableForAdoption() {
    adoptable = false;
}

void Animal::setAvailableForAdoption() {
    adoptable = true;
}

void Animal::displayAnimalInfo() const {
    std::cout << "Animal: " << name << ", Species ID: " << speciesID << ", Age: " << age
        << ", Available for Adoption: " << (adoptable ? "Yes" : "No") << endl;
}

std::string Animal::getAnimalName() const {
    return name;
}

int Animal::getSpeciesID() const {
    return speciesID;
}

int Animal::getAnimalAge() const {
    return age;
}

bool Animal::isAdoptable() const {
    return adoptable;
}

void Animal::inputAnimalData() {
   
 cout << "Enter the name of the animal: " << endl;

    cin >> name;

    cout << "Enter the species ID: ";

    cin >> speciesID;

    cout << "Enter the age of the animal: ";

    cin >> age;

}
