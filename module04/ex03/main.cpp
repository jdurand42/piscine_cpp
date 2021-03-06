#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");

	AMateria* tmp;
	tmp = src->createMateria("ice");

	moi->equip(tmp);

	tmp = src->createMateria("cure");
	moi->equip(tmp);

	Cure cure;
	Cure cure3;
	cure.use(*moi);
	std::cout << "Curexp: " << cure.getXp() << std::endl;
	Cure cure2(cure);
	std::cout << "Cure2 xp: " << cure2.getXp() << std::endl;
	cure3 = cure;
	std::cout << "Cure3 xp: " << cure3.getXp() << std::endl;
	//cure.use();
	tmp = src->createMateria("ice");

	moi->equip(tmp);

	tmp = src->createMateria("ice");

	moi->equip(tmp);

	tmp = src->createMateria("ice");

	moi->equip(tmp);

	tmp = src->createMateria("ice");

	moi->equip(tmp);

	std::cout << "moi\n";
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(2, *bob);
	moi->use(3, *bob);
	moi->use(4, *bob);

	std::cout << "jim\n";
	ICharacter *jim = new Character(*moi);
	jim->use(0, *bob);
	jim->use(1, *bob);
	jim->use(2, *bob);
	jim->use(3, *bob);
	jim->use(4, *bob);

	moi->unequip(0);
	moi->equip(src->createMateria("cure"));
	jim->use(0, *bob);

	moi->unequip(3);
	moi->unequip(2);
	moi->unequip(12);

	std::cout << "jimbo\n";
	Character jimbo("Jimbo");
	jimbo.equip(src->createMateria("ice"));
	jimbo.equip(src->createMateria("ice"));
	jimbo.equip(src->createMateria("ice"));
	jimbo.equip(src->createMateria("ice"));

	jimbo = *moi;
	jimbo.use(0, *bob);
	jimbo.use(1, *bob);
	jimbo.use(2, *bob);
	jimbo.use(3, *bob);
	jimbo.use(4, *bob);

	std::cout << "src: ";
	IMateriaSource* src2 = new MateriaSource(*src);
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());

	MateriaSource src3;
	src3.learnMateria(new Cure());
	src3.learnMateria(new Cure());
	src3 = *src2;
	src3.createMateria("cure")->use(*bob);

	delete bob;
	delete moi;
	delete jim;
	delete src;
	delete src2;

	return 0;
}
