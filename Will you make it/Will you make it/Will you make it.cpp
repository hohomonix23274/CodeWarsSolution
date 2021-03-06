// Will you make it.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/will-you-make-it/train/cpp

#include "pch.h"
#include <iostream>
#include <cmath>
#include <cassert>

void SampleTest();
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left);

int main()
{
	SampleTest();
}

void SampleTest()
{
	assert(zero_fuel(50, 25, 2) == (true));
	assert(zero_fuel(100, 50, 1) == (false));
	std::cout << "Test is ok!" << std::endl;
}

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
	return fuel_left * mpg >= distance_to_pump;
}
