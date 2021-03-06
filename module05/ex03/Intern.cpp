#include "Intern.hpp"

std::string Intern::_names[3] = {
	"presidential pardon",
	"robotomy request",
	"shuberry creation"
};

Intern::Intern()
{
	_forms[0] = &Intern::makePresidentialPardonForm;
	_forms[1] = &Intern::makeRobotomyRequestForm;
	_forms[2] = &Intern::makeShubberryCreationForm;
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& intern)
{
	_forms[0] = intern._forms[0];
	_forms[1] = intern._forms[1];
	_forms[2] = intern._forms[2];
}

void Intern::operator = (const Intern& intern)
{
	_forms[0] = intern._forms[0];
	_forms[1] = intern._forms[1];
	_forms[2] = intern._forms[2];
}

Form* Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		//std::cout << _names[i] << std::endl;
		if (name == _names[i])
			return (_forms[i](target));
	}
	std::cout << "Form not found\n";
	return (NULL);
}

Form* Intern::makeShubberryCreationForm(std::string target)
{
	return (new ShubberyCreationForm(target));
}

Form* Intern::makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}
