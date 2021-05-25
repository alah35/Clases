#pragma once
#include<iostream>
#include<array>

//template <class T>
class Stack
{
private:
	int j = -1;
	int* List = new int;
	
public:
	void IsEmpty()
	{
		if (j == -1) std::cout << "Stack is empty\n";
		else std::cout << "Stack is NOT empty\n";
	}

	void push(int a)
	{
		j++;
		List[j] = a;
	}

	int top()
	{
		return List[j];
	}

	void pop()
	{
		j--;
	}

	void show()
	{
		for (int i = 0; i <= j; i++)
		{
			std::cout << List[i]<<" ";
		}
		std::cout << "\n";
	}

	void clear()
	{
		delete List;
		List = nullptr;
	}
	
};

