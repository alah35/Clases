#pragma once
#include <array>
#include <iostream>
#include"Vector.h"

class MyArray  // : public Vector
{
public:
	unsigned int N;
	unsigned int M;
	int** Matrix = new int* [N];

	//Vector X, Y, Z;

	MyArray(unsigned int x, unsigned int y)
	{
		N = x; M = y;
	}

	void Create()
	{
		for (int i = 0; i < N; i++)
		{
			Matrix[i] = new int[M];
		}
	}

	void Clear()
	{
		for (int i = 0; i < N; i++)
		{
			delete[] Matrix[i];
		}
		delete[] Matrix;
	}

	void Fill()       //(Vector X, Vector Y, Vector Z) для этого каждый вектор должен
	{				  // быть одномерным массивом сам по себе 
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				Matrix[i][j] = i+j;
			}
		}
	}

	void Print()
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				std::cout.width(3);
				std::cout << Matrix[i][j] << " ";
			}
			std::cout << "\n";
		}
	}

	void Summary(int Date)
	{
		int IndexOfString = Date % 2;
		int Sum = 0;
		for (int j = 0; j < M; j++)
		{
			Sum = Sum + Matrix[IndexOfString][j];
		}
		for (int j = 0; j < M; j++)
		{
			Matrix[IndexOfString][j] = Sum;
		}

	}
};


