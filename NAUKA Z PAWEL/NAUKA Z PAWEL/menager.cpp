#include<iostream>
#include "menager.h"
#include "Human.h"



Menager::Menager() {
	try {
		p = new Human(20, 0, 0);
	

	tab[0] = new Lion("puszek", eat, "Lion", 20);
	tab[1] = new Elephant("Pianek", eat, "Elephant", 20);
	tab[2] = new Panda("Szoku", eat, "Panda", 20);

	}
	catch (...) {
		delete p;
		delete[]tab;
	
		
		
		std::cout << "Nie starczylo pamieci!!!"; }
}
