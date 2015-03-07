lab5: main.o PreconditionViolationException.o FarmAnimal.o Chicken.o Cow.o CyberChicken.o AnimalPen.o
	g++ -std=c++11 -g -Wall main.o PreconditionViolationException.o FarmAnimal.o Chicken.o Cow.o CyberChicken.o AnimalPen.o -o lab5
main.o: main.cpp Node.h Node.hpp Stack.h Stack.hpp StackInterface.h
	g++ -std=c++11 -g -Wall -c main.cpp
PreconditionViolationException.o: PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -std=c++11 -g -Wall -c PreconditionViolationException.cpp
FarmAnimal.o: FarmAnimal.h FarmAnimal.cpp
	g++ -std=c++11 -g -Wall -c FarmAnimal.cpp
Chicken.o: Chicken.h Chicken.cpp
	g++ -std=c++11 -g -Wall -c Chicken.cpp
Cow.o: Cow.cpp Cow.h
	g++ -std=c++11 -g -Wall -c Cow.cpp
CyberChicken.o: CyberChicken.h CyberChicken.cpp
	g++ -std=c++11 -g -Wall -c CyberChicken.cpp
AnimalPen.o: AnimalPen.h AnimalPen.cpp
	g++ -std=c++11 -g -Wall -c AnimalPen.cpp

clean:
	rm *.o lab5
