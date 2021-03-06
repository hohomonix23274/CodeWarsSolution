// Even numbers in an array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

std::vector<int> evenNumbers(std::vector<int> arr, int n)
{
	std::vector<int> result;
	for (int a : arr)
	{
		if (a % 2 == 0)
		{
			result.push_back(a);
		}
		if (result.size() > n)
		{
			result.erase(result.begin());
		}
	}
	return result;
}

void SampleTest()
{
	using V = std::vector<int>;
			assert(evenNumbers(V{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 3) == (V{ 4, 6, 8 }));
			assert(evenNumbers(V{ -22, 5, 3, 11, 26, -6, -7, -8, -9, -8, 26 }, 2) == (V{ -8, 26 }));
			assert(evenNumbers(V{ 6, -25, 3, 7, 5, 5, 7, -3, 23 }, 1) == (V{ 6 }));
			assert(evenNumbers(V{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 4) == (V{ 2, 4, 6, 8 }));
			assert(evenNumbers(V{ 1, 3, 5, 7, 9 }, 0) == (V{}));
			std::cout << "Perfect!" << std::endl;
}