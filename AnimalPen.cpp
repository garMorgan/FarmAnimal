#include "AnimalPen.h"

AnimalPen::AnimalPen()
{

}
AnimalPen::~AnimalPen()
{
	while(!isEmpty())
	{
		releaseAnimal();
	}
}
void AnimalPen::addAnimal(FarmAnimal* animal)
{
	push(animal);
}
FarmAnimal* AnimalPen::peakAtNextAnimal()
{
	return peek();
}
void AnimalPen::releaseAnimal()
{
	FarmAnimal* temp;
	temp = pop();
	delete temp;
}
bool AnimalPen::isPenEmpty()
{
	return isEmpty();
}
