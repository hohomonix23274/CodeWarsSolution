// Growing Plant.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/simple-fun-number-74-growing-plant/train/cpp

#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;

void SampleTest();

int main()
{
	SampleTest();
}

int growingPlant(int upSpeed, int downSpeed, int desiredHeight)
{
	int days = 1;
	int height = 0;

	height += upSpeed;

	while (height < desiredHeight)
	{
		height -= downSpeed;
		height += upSpeed;
		days++;
	}
	return days;
}

void doTest(int upSpeed, int downSpeed, int desiredHeight, int expected)
{
	assert(growingPlant(upSpeed, downSpeed, desiredHeight), Equals(expected));
}

void SampleTest() 
{
	doTest(100, 10, 910, 10);
	doTest(10, 9, 4, 1);
	cout << "ALL IS GOOD" << endl;
}