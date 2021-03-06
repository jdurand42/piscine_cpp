#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>
//#include "Sorcerer.hpp"

class Victim
{
	public:
	Victim(std::string name = "jean hubert");
	virtual ~Victim();
	Victim(const Victim& Victim);
	void operator = (const Victim& victim);

	std::string announce() const;
	virtual void getPolymorphed() const;

	protected:
	std::string _name;
};

std::ostream& operator << (std::ostream& out, const Victim& victim);

#endif
