// Snail crawls up.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/5b93fecd8463745630001d05

#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;

void SampleTest();

int main()
{
	SampleTest();
}

int snail(int column, int day, int night)
{
	int t = 0;
	if (day >= column)
	{
		t = 1;
	}
	else
	{
		while (day < column)
		{
			column -= (day - night);
			t++;
		}
		t++;
	}

	return t;
}

void SampleTest()
{
	assert(snail(3, 2, 1), Equals(2));
	assert(snail(10, 3, 1), Equals(5));
	assert(snail(10, 3, 2), Equals(8));
	assert(snail(100, 20, 5), Equals(7));
	assert(snail(5, 10, 3), Equals(1));
	cout << "Test is ok!" << endl;
}