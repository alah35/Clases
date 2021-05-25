#pragma once
#include<iostream>
#include<math.h>

class Vector
{
private:
	double x;
	double y;
	double z;
	//double V[];
public:

	Vector(double _x,double _y, double _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	//Vector(double _x, double _y, double _z)
	//{
	//	 V[] = {_x, _y, _z};
	//}
	//Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	//{}

	void Show()
	{
		std::cout << x << " " << y << " " << z << " ";
	}

	//void SetV(double _x, double _y, double _z)
	//{
	//V {}
	//}
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

