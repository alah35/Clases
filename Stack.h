#pragma once
#include<iostream>
#include<array>

template <class T> //because we wanna to use this class with different types
class stack
{
private:
	int j_ = -1;
	T* list_ = new T; //stack
	
public:
	void is_empty() const // check if the stack is empty
	{
		if (j_ == -1) std::cout << "Stack is empty\n";
		else std::cout << "Stack is NOT empty\n";
	}

	void push(T a) // add an element 
	{
		j_++;
		list_[j_] = a;
	}

	T top() // return top of stack 
	{
		return list_[j_];
	}

	void pop() // removes the last element by resizing the stack 
	{
		j_--;
	}

	void show() // it shows your stack
	{
		for (int i = 0; i <= j_; i++)
		{
			std::cout << list_[i]<<" ";
		}
		std::cout << "\n";
	}

	void clear() // doesn't work, will be cool if you help me with it
	{
		delete list_;
		list_ = nullptr;
		j_ = -1;
	}
	
};

