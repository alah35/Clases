#include<iostream>
#include"Vector.h"
#include"MyArray.h"

int main()
{
	double x, y, z;
	std::cout << "Hi, Enter your vector:\nX=";
	std::cin >> x;
	std::cout << "Y=";
	std::cin >> y;
	std::cout<<"Z=";
	std::cin >> z;
	Vector Line(x, y, z);
	std::cout << "Your Vector looks like:\n";
	Line.Show();
	std::cout << "\nLength of your Vector: ";
	std::cout<<Line.Length();
}