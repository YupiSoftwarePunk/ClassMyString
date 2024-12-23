#ifndef _DEVSTRING_CPP_
#define _DEVSTRING_CPP_
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>


class DevString
{
public:

	DevString();

	DevString(int size);

	DevString(const char* word);

	~DevString();

	int GetSize();

	char* GetWord();

	DevString operator+(const DevString& other);

	/*void operator=(const BlackBoyy& other);*/

	DevString operator=(const DevString& other);

	void PrintWord();

	void Getline();

private:
	char* word;
	int size;
	size_t count;

};

#endif 