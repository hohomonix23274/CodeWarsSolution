// Find the stray number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/find-the-stray-number/train/cpp

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

int stray(std::vector<int> num);
void SampleTest();

int main()
{
	SampleTest();
}

void SampleTest()
{
	assert(stray({ 1, 1, 2 }), Equals(2));
	assert(stray({ 3, 3, 4 }), Equals(4));
	assert(stray({ 5, 5, 2 }), Equals(2));
	std::cout << "Test is ok!" << std::endl;
}

int stray(std::vector<int> num)
{
	sort(num.begin(), num.end());
	int first = num.at(0);
	int second = num.at(1);
	int third = num.back();
	if (first == second) {
		return third;
	}
	else {
		return first;
	}
};
