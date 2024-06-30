Overview
This repository contains a C++ program designed to manage an animal sanctuary system using object-oriented principles. The system includes classes for individual animals and a collection class to manage multiple animals within the sanctuary.

Key Classes
Class: Animal

Description:

Represents an individual animal within the sanctuary.
Stores information such as name, species ID, age, and adoption status.
Includes constructors for default, parameterized, and copy initialization, along with a destructor for memory cleanup.
Provides methods to query and modify animal data, including availability for adoption and information display.
Methods:

Animal(): Default constructor.
Animal(std::string animalName, int species, int animalAge): Parameterized constructor.
Animal(const Animal& other): Copy constructor.
~Animal(): Destructor.
bool isAvailableForAdoption() const: Checks if the animal is available for adoption.
void setUnavailableForAdoption(): Marks the animal as unavailable for adoption.
void setAvailableForAdoption(): Marks the animal as available for adoption.
void displayAnimalInfo() const: Displays detailed information about the animal.
string getAnimalName() const: Retrieves the name of the animal.
int getSpeciesID() const: Retrieves the species ID of the animal.
int getAnimalAge() const: Retrieves the age of the animal.
bool isAdoptable() const: Checks if the animal is adoptable.
void inputAnimalData(): Accepts user input to initialize animal data.
Class: Animaljungle

Description:

Manages a collection of Animal objects within the sanctuary.
Uses an array to store up to 100 animals (MAX_ANIMALS constant).
Provides methods to add new animals, remove animals by name, find animals by name, and display information about all animals in the sanctuary.
Methods:

Animaljungle(): Constructor to initialize the sanctuary with no animals.
void addAnimal(const Animal& newAnimal): Adds a new animal to the sanctuary.
void removeAnimalByName(const string& animalName): Removes an animal from the sanctuary based on its name.
void findAnimal(const string& animalName) const: Searches for and displays information about an animal by its name.
void displayAllAnimals() const: Displays information about all animals currently housed in the sanctuary.
Functionality
Dynamic Memory Management:

Utilizes dynamic memory allocation and deallocation within the Animal class to manage resources efficiently.
Ensures proper handling of memory using constructors and destructors.
User Interaction:

Facilitates user input through methods like inputAnimalData() to populate animal information.
Outputs detailed information about animals via displayAnimalInfo() and displayAllAnimals().
Data Integrity and Management:

Implements robust methods (addAnimal, removeAnimalByName, findAnimal) to maintain data integrity within the sanctuary.
Handles up to 100 animals seamlessly using an array-based data structure.
Conclusion
This repository demonstrates effective use of object-oriented programming principles in C++ to manage a virtual animal sanctuary system. It provides a structured approach to creating, modifying, and retrieving animal data while ensuring memory safety and user-friendly interaction.

Notes
Enhance code readability and maintainability by adding comments and documenting complex algorithms.
Consider expanding functionality, such as sorting animals by age or species, to further enrich the application's capabilities.
This report offers an overview of the animal sanctuary management system, detailing its classes, methods, and functionality. It serves as a comprehensive guide for understanding and utilizing the provided C++ program effectively.
