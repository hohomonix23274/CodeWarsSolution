//  IsitPrime.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задание: https://www.codewars.com/kata/5262119038c0985a5b00029f
//
// Программа определяет, простое ли число, было введено ( условно ). 

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;


bool isPrime(int num) {
	bool result = true;
	if (num < 2) result = false;
	else {
		int tmp = sqrt(num);
		for (int i = 2; i <= tmp; i++)
			if (num % i == 0) result = false;
	}
	return result;
}

void SampleTest()
{
	assert(isPrime(1) == (false));
	assert(isPrime(3) == (true));
	assert(isPrime(5) == (true));
	cout << "SampleTest is okay!" << endl;
}


int main()
{
	SampleTest();
}
