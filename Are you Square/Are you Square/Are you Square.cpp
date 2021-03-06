// Are you Square.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка: https://www.codewars.com/kata/54c27a33fb7da0db0100040e
// Суть задачи в том, чтобы проверить является ли входное число полным квадратом. (4 , 9 , 16 ... = true)
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

bool is_square(int n)
{
	if (n < 0) { return false; }
	else if (n == 0 || n == 1) { return true; }
	else if (n > 1 && sqrt(n) - static_cast<int> (sqrt(n)) <= 0.00001)
	{
		return true;
	}
	else return false;
}

void SampleTest() {
	assert(is_square(-1) == 0);
	assert(is_square(4) == 1);
	assert(is_square(25) == 1);
	assert(is_square(1) == 1);
	assert(is_square(3) == 0);
	cout << "SampleTest is ok!" << endl;
}

int main()
{
	SampleTest();
}


