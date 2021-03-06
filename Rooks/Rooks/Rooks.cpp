// Rooks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

using ull = unsigned long long int;
ull rooks(int n, int k)
{
	ull res = 0;
	if (n * n >= k)
	{
		res = 1;
		for (int ck = 1; ck <= k; ck++)
		{
			n--;
			res *= ((n + 1) * (n + 1));
			res /= ck;
		}
	}
	return res;
}

void SampleTest()
{
	assert(rooks(1, 1), Equals(1));
	assert(rooks(4, 1), Equals(16));
	assert(rooks(4, 2), Equals(72));
	std::cout << "All test is passed!" << std::endl;
}