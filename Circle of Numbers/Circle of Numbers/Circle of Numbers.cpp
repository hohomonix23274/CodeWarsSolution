// Circle of Numbers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/simple-fun-number-2-circle-of-numbers/train/cpp

#include "pch.h"
#include <iostream>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

int circleOfNumbers(int n, int firstNumber)
{
	return (firstNumber - n / 2 < 0) ? firstNumber + n / 2 : firstNumber - n / 2;
}

void SampleTest()
{
	assert(circleOfNumbers(10, 2) == (7));
	assert(circleOfNumbers(4, 1) == (3));
	assert(circleOfNumbers(6, 3) == (0));
	assert(circleOfNumbers(10, 7) == (2));
	std::cout << "Awesome solve!" << std::endl;
}