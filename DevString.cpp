#include "DevString.hpp"

DevString::DevString()
{
	size = 80;
	char* word = new char[size];
	count++;
}

DevString::DevString(int size)
{
	this->size = size;
	char* word = new char[this->size];
	count++;
}

DevString::DevString(const char* word)
{
	size = strlen(word) + 1;
	this->word = new char[size] {0};
	memcpy(this->word, word, size);
	count++;
}

DevString::~DevString()
{
	delete[] word;
	count--;
}

int DevString::GetSize()
{
	return size;
}

char* DevString::GetWord()
{
	return this->word;
}

DevString DevString::operator+(const DevString& other)
{
	DevString newString;
	newString.size = strlen(this->word) + strlen(other.word);
	newString.word = new char[newString.size + 1];
	memcpy(newString.word, this->word, this->size - 1);
	memcpy(newString.word + (this->size - 1), other.word, other.size);
	newString.word[newString.size] = '\0';
	return newString;
}

DevString DevString::operator=(const DevString& other)
{
	this->size = strlen(other.word);
	this->word = new char[size + 1];
	memcpy(this->word, other.word, this->size);
	return *this;
}

void DevString::PrintWord()
{
	std::cout << word;
}

void DevString::Getline()
{
	int count = 0;
	for (int i = 0; i < this->size - 1; i++)
	{
		this->word[i] = getchar();
		if (this->word[i] == '\n')
		{
			break;
		}
		count++;
	}
	this->word[this->size] = '\0';
}

/*
DevString one("Hello");
DevString two("World");
DevString three = one + two;
*/
