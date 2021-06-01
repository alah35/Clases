#include<iostream>
#include"Vector.h"
#include"MyArray.h"
#include "Stack.h"
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Fox.h"

int main()
{
	std::cout << " Let's check how works:\n";
	Animal* p = new Dog("Dog goes: woof ");
	p->Voice();
	Animal* p1 = new Cat("Cat goes: meow ");
	p1->Voice();
	Animal* p2 = new Fox("But, what does the fox say? ");
	p2->Voice();
	std::cout << "\nNow, with an array:\n";
	Animal* array[3] = { p, p1, p2 };
	for (auto& i : array)
	{
		i->Voice();
		std::cout << "\n";
	}
	
}
