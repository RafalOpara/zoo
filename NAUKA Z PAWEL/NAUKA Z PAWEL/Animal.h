#ifndef animal_h
#define animal_h

#include <string>

enum State {
	sleep=0,
	eat
};
class Animal
{
	
protected:
	std::string name;
	State state;
	std::string race;
	int age;
	
	Animal(std::string name , State state, std::string race, int age);

public:
	

	State get_state(){
		return state;
	}
	void set_state(State s)
	{
		if (s<sleep || s>eat)
			return;
		
		state = s;
	}

};

class Lion :public Animal
{
public:
	Lion(std::string name = "puszek", State state = eat, std::string race = "Lion", int age = 40);
	
};

class Elephant :public Animal
{
public:
	Elephant(std::string name = "fat", State state = eat, std::string race = "Elephant", int age = 3);
	
};

class Panda :public Animal
{
public:
	Panda(std::string name = "Pianek", State state = sleep, std::string race = "Panda", int age = 10);

};


#endif //uczenie_zoo



