// Alphabet symmetry.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

std::vector<int> solve(std::vector<std::string> v)
{
	std::vector<int> res(v.size());

	for (int i = 0; i < v.size(); i++) 
	{
		for (int j = 0; j < v[i].size(); j++)
		{

			if (tolower(v[i][j]) - 97 == j)
			{
				res[i]++;
			}
		}
	}
	return res;
}

// Нужно для тестов
using VS = std::vector<std::string>;
using VI = std::vector<int>;

void SampleTest()
{
	assert(solve(VS{ "abode","ABc","xyzD" }) == (VI{ 4,3,1 }));
	assert(solve(VS{ "abide","ABc","xyz" }) == (VI{ 4,3,0 }));
	assert(solve(VS{ "IAMDEFANDJKL","thedefgh","xyzDEFghijabc" }) == (VI{ 6,5,7 }));
	assert(solve(VS{ "encode","abc","xyzD","ABmD" }) == (VI{ 1,3,1,3 }));
	assert(solve(VS{}) == (VI{}));
	std::cout << "All test is cool!" << std::endl;
}


