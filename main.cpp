#include <iostream>
#include "AnimalPen.h"
#include <string>
#include "Chicken.h"
#include "Cow.h"
#include "CyberChicken.h"


void printMenu();

int main()
{
	
	//AnimalPen* animalptr = new AnimalPen();
	FarmAnimal* cowPtr = new Cow();
	
	
	
	
	int choice;
	char input = ' ';
	std::string name;
	do
	{
		printMenu();
		std::cin >> choice;
		switch(choice)
		{
			case 1 : std::cout << "cow is called " << cowPtr->getName() << " and goes " << cowPtr->getSound() << std::endl;
			std::cout << "You would like to end? (y/n) ";
			std::cin >> input;
			break;
			case 2 : std::cout << "chicken is called " << std::endl;

			default : std::cout << "Not a valid choice" << std::endl;
		}
	}while(input!='y');
	/*AnimalPen* animal;
	std::cout << "Choose an animal" << std::endl;
	std::cin >> name;
	std::cout << animal->addAnimal(name) << std::endl;*/

	//std::cout << "Hello, World" << std::endl;

	return 0;
}

void printMenu()
{
	std::cout << "\n\nSelect an animal to add to the pen:\n"
		"1.) Cow (produces milk)\n"
		"2.) Chicken (cannot lay eggs)\n"
		"3.) Cyber Chicken (seems dangerous, but lays eggs)\n"
		"---------------------------------------------------\n"
		"choice: ";
}
