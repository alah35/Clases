#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog() {}
	Dog(std::string _x) : Animal(_x)
	{}
	void Voice() const override {
		std::cout << Message;
	}
};

