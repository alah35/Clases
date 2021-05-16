#pragma once
#include<iostream>
#include<math.h>

class Vector
{
private:
	double x;
	double y;
	double z;
public:
	Vector()
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}

	void Show()
	{
		std::cout << x << " " << y << " " << z << " ";
	}

	double GetX()
	{
		return x;
	}
	void SetX(double _x)
	{
		x = _x;
	}

	double GetY()
	{
		return y;
	}
	void SetY(double _y)
	{
		y = _y;
	}

	double GetZ()
	{
		return z;
	}
	void SetZ(double _z)
	{
		z = _z;
	}

	double Length()
	{
		double L = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		return L;
	}
};

