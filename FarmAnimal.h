#ifndef FARMANIMAL_H
#define FARMANIMAL_H
#include <string>


class FarmAnimal
{
protected:
	std::string m_name;
	std::string m_sound;
public:
	FarmAnimal();
	void setName(std::string name);	
	std::string getName() const;
	void setSound(std::string sound);
	std::string getSound() const;
};

#endif
