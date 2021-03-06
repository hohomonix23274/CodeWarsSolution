// Pillars.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задание: https://www.codewars.com/kata/57356c55867b9b7a60000bd7
// Минимальный наборчик для калькулятора.
//

#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;

int basicOp(char op, int val1, int val2) {

	int sum = val1 + val2;
	int sub = val1 - val2;
	int mult = val1 * val2;
	int slash = val1 / val2;


	switch (op) {

	case '+': return sum;
	case '-': return sub;
	case '*': return mult;
	case '/': return slash;

	}

}

void SampleTest() {
	assert(basicOp('+', 4, 7) == (11));
	assert(basicOp('-', 20, 25) == (-5));
	assert(basicOp('/', 150, 30) == (5));
	assert(basicOp('*', 5, 3) == (15));
	cout << "SampleTest is okay!" << endl;
}

int main()
{
	SampleTest();
}
