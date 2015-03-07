#ifndef ANIMALPEN_H
#define ANIMALPEN_H
#include "Stack.h"
#include "FarmAnimal.h"
#include <stdexcept>

class AnimalPen : Stack<FarmAnimal*>
{
public:
	AnimalPen();
	~AnimalPen();
	void addAnimal(FarmAnimal* animal);
	FarmAnimal* peakAtNextAnimal();
	void releaseAnimal();
	bool isPenEmpty();
};
#endif


