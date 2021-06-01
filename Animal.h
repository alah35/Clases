#pragma once
#include <iostream>
#include<string>

class Animal
{
protected:
	std::string Message;
public:
	Animal() {}
	Animal(std::string msg) : Message(msg)
	{}
	
	virtual void Voice() const {
		std::cout << Message;
	}
};

