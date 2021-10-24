#pragma once
#include "Animal.h"

class Human;
class Animal;

class Menager
{
	Human* p = nullptr;
	bool ready = false;

	Animal *tab[3];



public:
	Menager();
	
};