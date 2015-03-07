#include "FarmAnimal.h"

FarmAnimal::FarmAnimal()
{
	m_name = "unset";
	m_sound = "unset";
}
void FarmAnimal::setName(std::string name)
{
	m_name = name;
}
std::string FarmAnimal::getName() const
{
	return m_name;
}
void FarmAnimal::setSound(std::string sound)
{
	m_sound = sound;
}
std::string FarmAnimal::getSound() const
{
	return m_sound;
}
