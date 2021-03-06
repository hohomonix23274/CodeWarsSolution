// Beeramid.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: 
//
#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;

int beeramid(int bonus, double price)
{
	int sum = 0;
	int res = 0;

	for (int i = 1; ; i++)
	{
		sum = sum + i * i;
		if (sum <= (bonus / price))
		{
			res++;
		}
		else

			break;
	}

	return res;
}

void SampleTest() {
	assert(beeramid(9, 2) == (1));
	assert(beeramid(10, 2) == (2));
	assert(beeramid(11, 2) == (2));
	assert(beeramid(21, 1.5) == (3));
	assert(beeramid(454, 5) == (5));
	assert(beeramid(455, 5) == (6));
	assert(beeramid(4, 4) == (1));
	assert(beeramid(3, 4) == (0));
	assert(beeramid(0, 4) == (0));
	assert(beeramid(-1, 4) == (0));
	cout << "SampleTest is ok!" << endl;
}

int main()
{
	SampleTest();
}


