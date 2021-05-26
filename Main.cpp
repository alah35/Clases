#include<iostream>
#include"Vector.h"
#include"MyArray.h"
#include "Stack.h"
#include <string>


int main()
{
	stack<int> list; //if you wanna change the type of parameters just write your type between <...>,  
	int a, b, c, d, e; //and change the type of variable a,b,c,d,e to the same
	list.is_empty();
	std::cout << "Enter your elements:\na= ";
	std::cin >> a;
	std::cout << "b= ";
	std::cin >> b;
	std::cout << "c= ";
	std::cin >> c;
	std::cout<< "d= ";
	std::cin>> d;
	list.push(a);
	list.push(b);
	list.push(c);
	list.push(d);
	list.is_empty();
	std::cout << "Your stack: ";
	list.show();
	std::cout << "Top of your stack: ";
	std::cout<<list.top()<<"\n";
	std::cout << "Now, lets delete last element: \n";
	list.pop();
	list.show();
	std::cout << "Again: \n";
	list.pop();
	list.show();
	std::cout << "Add one more element:\ne=";
	std::cin >> e;
	list.push(e);
	std::cout << "Lets see:\n";
	list.show();
	//List.clear();
	std::cout << "Delete the stack:\n";
	list.pop();
	list.pop();
	list.pop();
	list.is_empty();
	
}
