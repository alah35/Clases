#pragma once
#include<iostream>
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat() {}
	Cat(std::string _x) : Animal(_x)
	{}
	void Voice() const override {
		std::cout << Message;
	}
};

