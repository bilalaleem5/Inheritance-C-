#include "animal.h"
using namespace std;

Animaljungle::Animaljungle()
 {

    animalCount = 0; 

}

	// Function to add an animal to the sanctuary
void Animaljungle::addAnimal(const Animal& newAnimal) 
{
    if (animalCount < MAX_ANIMALS) 
    {
    
    animals[animalCount] = newAnimal;

        animalCount++;
    }
}

	// Function to remove an animal by name

void Animaljungle::removeAnimalByName(const string& animalName) 
{
    for (int i = 0; i < animalCount; i++)
    {
        if (animals[i].getAnimalName() == animalName) 
        {
            for (int j = i; j < animalCount - 1; j++) 
            {
                animals[j] = animals[j + 1];
            }
            animalCount--;
            break;
        }
    }
}

	// Function to find an animal by name and display its info
void Animaljungle::findAnimal(const string& animalName) const
 {
    for (int i = 0; i < animalCount; i++)
    {
        if (animals[i].getAnimalName() == animalName)
        {
            animals[i].displayAnimalInfo();
            break;
        }
    }
}

// Function to display information about all animals in the sanctuary
void Animaljungle::displayAllAnimals() const 
{
    
    for (int i = 0; i < animalCount; i++) 
    {
    
        animals[i].displayAnimalInfo();
    }
}
