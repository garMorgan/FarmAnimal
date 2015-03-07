#ifndef COW_H
#define COW_H
#include "FarmAnimal.h"

class Cow : public FarmAnimal
{
protected:
	double m_milkProduced;
public:
	Cow();
	double getMilkProduced() const;
	void setMilkProduced(double gallons);
};

#endif
