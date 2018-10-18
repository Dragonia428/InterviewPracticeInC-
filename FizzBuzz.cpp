#include "pch.h"
#include "FizzBuzz.h"
#include <iostream>

FizzBuzz::FizzBuzz()
{
	list = new int[100];
	for (int i = 0; i < 100; i++) list[i] = i;
	this->length = 100;
}
FizzBuzz::FizzBuzz(int length)
{
	list = new int[length];
	for (int i = 0; i < length; i++) list[i] = i;
	this->length = length;
}
FizzBuzz::~FizzBuzz()
{
	delete list;
}
void FizzBuzz::test()
{
	//trying a pointer based solution for this
	for (int* start = &list[0], int* end = &list[length]; *start != *end; *start++)
	{
		if (*start % 3 == 0 && *start % 5 != 0)
		{
			std::cout << "Fizz \n";
		}
		else if (*start % 3 == 0 && *start % 5 != 0)
		{
			std::cout << "Buzz \n";
		}
		else if (*start % 3 == 0 && *start % 5 == 0)
		{
			std::cout << "FizzBuzz \n";
		}
		else std::cout << *start;
	}
}

