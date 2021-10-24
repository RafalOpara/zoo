#include "Animal.h"


Animal::Animal(std::string name, State state, std::string race, int age )
	:name(name),state(state),race(race),age(age){}


Lion::Lion(std::string name, State state, std::string race, int age)
	:Animal(name,state,race,age){}


Elephant::Elephant(std::string name, State state, std::string race, int age)
	: Animal(name, state, race, age) {}


Panda::Panda(std::string name, State state, std::string race, int age)
	: Animal(name, state, race, age) {}



