#pragma once
#include <iostream>
#include "Animal.h"

class Fox : public Animal
{
public:
	Fox() {}
	Fox(std::string _x) : Animal(_x)
	{}
	void Voice() const override {
		std::cout << Message;
	}
};

