#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap ft1("Cl4p");
	FragTrap ft2("henri");

	ft1.rangedAttack("Brick");
	ft2.meleeAttack("Handsome Jack");
	ft1.takeDamage(25);
	ft1.beRepaired(10);

	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");

	ScavTrap st1("Sc4v");
	st1.rangedAttack("Krieg");
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();

	std::cout << "------ENTER THE NINJATRAP--------\n";
	NinjaTrap n1("Ninj4");
	NinjaTrap n2("Ni4k");

	n1.takeDamage(12);
	n1.ninjaShoebox(ft1);
	n1.ninjaShoebox(st1);
	n1.ninjaShoebox(n2);
	n1.ninjaShoebox(n2);
	n1.ninjaShoebox(n1);

	std::cout << "------ENTER THE SUPERTRAP--------\n";
	SuperTrap su("Superman");
	std::cout << "\n";
	su.print_test();
	su.takeDamage(25);
	SuperTrap su2(su);
	su2.print_test();
	su2.takeDamage(25);

	SuperTrap su3("roger");
	su3 = su2;
	su3.print_test();
	su3.takeDamage(25);
	su3.beRepaired(1000);


	su.vaulthunter_dot_exe("Henrichard");
	su.ninjaShoebox(n2);
	su.ninjaShoebox(ft1);

}
