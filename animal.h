#pragma once
#include<iostream>
#include <string>
using namespace std;

// Define a class called Animal
class Animal 
{
private://private class


    string name; // Name of the animal

    int speciesID; // Unique species ID
 
    int age; // Age of the animal

    bool adoptable;  // Indicates if the animal is adoptable

public: //public class

    static int totalAnimals; // Static variable to keep track of the total number of animals



    Animal(); 	// Default constructor

    Animal(std::string animalName, int species, int animalAge); 	// Parameterized constructor

    Animal(const Animal& other); 	// Copy constructor

    ~Animal(); //destrucature



    bool isAvailableForAdoption() const;  // Returns whether the animal is available for adoption

    void setUnavailableForAdoption(); // Marks the animal as unavailable for adoption

    void setAvailableForAdoption(); // Marks the animal as available for adoption

    void displayAnimalInfo() const; // Display information about the animal, including its name, species ID, age, and adoption status

    string getAnimalName() const; // Returns the name of the animal

    int getSpeciesID() const; // Returns the species ID of the animal

    int getAnimalAge() const; // Returns the age of the animal

    bool isAdoptable() const; // Returns whether the animal is adoptable

    void inputAnimalData();

};


