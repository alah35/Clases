#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

class Dog : public Animal
{
private:
	std::string DogVoice;
public:
	Dog() {}
	Dog(std::string _x, std::string _y) : DogVoice(_x), Animal(_y)
	{}
	void Voice() const override {
		std::cout << DogVoice;
	}
};

