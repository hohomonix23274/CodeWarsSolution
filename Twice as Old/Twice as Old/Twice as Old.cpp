// Twice as Old.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/twice-as-old

#include "pch.h"
#include <iostream>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

int twice_as_old(int dad, int son)
{
	return abs(son * 2 - dad);
}

void SampleTest()
{
	assert(twice_as_old(36, 7), Equals(22));
	assert(twice_as_old(55, 30), Equals(5));
	assert(twice_as_old(42, 21) == (0));
	assert(twice_as_old(22, 1), Equals(20));
	assert(twice_as_old(29, 0), Equals(29));
	std::cout << "Test is ok" << std::endl;
}
