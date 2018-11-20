// Multiples3and5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка: https://www.codewars.com/kata/514b92a657cdc65150000006
//
#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;

int solution(int num)
{
	int summ = 0;
	for (int n = 1; n < num; n++)
		if ((n % 3) == 0 || (n % 5) == 0)
			summ += n;
	return summ;
}

void SampleTest() {
	assert(solution(10) == (23));
	cout << "ALL IS OKAY" << endl;
}


int main()
{
	SampleTest();
}
