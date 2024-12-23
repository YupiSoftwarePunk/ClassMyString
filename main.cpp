#include "DevString.hpp"
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*MyClass one;

	one.SetB(5);
	std::cout << one.GetB() << "\n";*/

	DevString a = "Hello";
	DevString b = "World";
	DevString c;

	/*for (int i = 0; i < c.GetSize(); i++)
	{
		std::cout << *(c.GetWord() + i);
	}*/

	c.Getline();
	c.PrintWord();

	return 0;
}


/*
DevString one("Hello");
DevString two("World");
DevString three = one + two;
*/