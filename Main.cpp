#include<iostream>
#include"Vector.h"
#include"MyArray.h"
#include "Stack.h"

int main()
{
	Stack List;
	List.IsEmpty();
	int a, b, c, d;
	std::cout << "Enter the first elements:\na= ";
	std::cin >> a;
	std::cout << "b= ";
	std::cin >> b;
	std::cout << "c= ";
	std::cin >> c;
	std::cout<< "d= ";
	std::cin>> d;
	List.push(a);
	List.push(b);
	List.push(c);
	List.push(d);
	List.IsEmpty();
	std::cout << "Your stack: ";
	List.show();
	std::cout << "Top of your stack: ";
	std::cout<<List.top()<<"\n";
	std::cout << "Now, lets delete last element: \n";
	List.pop();
	List.show();
	std::cout << "Again: \n";
	List.pop();
	List.show();
	int e;
	std::cout << "Add one more element:\ne=";
	std::cin >> e;
	List.push(e);
	std::cout << "Lets see:\n";
	List.show();
	List.pop();
	List.pop();
	List.pop();
	List.IsEmpty();
	//List.clear();
}
