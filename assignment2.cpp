#include"animal.h"
#include"jungle.h"
#include"animal.cpp"
#include"jungle.cpp"

int main()
{

	Animaljungle jungle; // Create an AnimalSanctuary object

	int userchoice;    // Variable to store user's choice


	do {

		cout << "Menu :" << endl; // Display the menu

		cout << "1. Add a unique animal" << endl; // Option to add an animal

		cout << "2. Remove an animal" << endl; // Option to remove an animal

		cout << "3. Find a unique animal" << endl; // Option to find an animal

		cout << "4. Display all unique animals" << endl; // Option to display all animals

		cout << "5. Quit" << endl; // Option to quit the program

		cout << "Enter the choice" << endl;

		cin >> userchoice; // Read user's choice

		cout << endl;

		switch (userchoice)

		{

		case 1: {

			Animal newAnimal; // Create a new Animal object

			newAnimal.inputAnimalData(); // Input animal data

			jungle.addAnimal(newAnimal); // Add the animal to the sanctuary

			break;

		}
		case 2: {

			// Case for removing an animal

			string animalname;

			cout << "Enter the name of the animal to remove" << endl;

			cin >> animalname;

			jungle.removeAnimalByName(animalname);// Call the removeAnimalByName function to remove the specified animal

			break;

		}

		case 3: {

			// Case for finding an animal

			string animalname;

			cout << "Enter the name of the animal to find" << endl;

			cin >> animalname;

			jungle.findAnimal(animalname); // Call the findAnimal function to display information about the specified animal

			break;

		}
		case 4: {

			// Case for displaying all unique animals in the sanctuary

			cout << "all unique animals in the sanctuary :" << endl;

			jungle.displayAllAnimals();  // Call the displayAllAnimals function to show information about all animals

			break;

		}


		case 5: {

			// Case for exiting the program

			cout << "Exiting the program" << endl;

			return 0;

		}

		default:

			cout << "invalid choice .plaese try again" << endl;

			break;

		}

	} while (userchoice != 5);


	return 0;
}
