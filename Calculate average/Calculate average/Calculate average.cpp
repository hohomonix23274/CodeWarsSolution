// Calculate average.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/calculate-average/train/cpp

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>

void SampleTest();
double calcAverage(const std::vector<int>& values);

int main()
{
	SampleTest();
}

void SampleTest()
{
	assert(calcAverage({ 2,5 }), EqualsWithDelta(3.5, EPS));
	assert(calcAverage({ 5 }), EqualsWithDelta(5, EPS));
	assert(calcAverage({ 4,2,1 }), EqualsWithDelta(2.33333, EPS));
	assert(calcAverage({ 3,2,5,1 }), EqualsWithDelta(2.75, EPS));
	assert(calcAverage({ 3,2,3,5,1 }), EqualsWithDelta(2.8, EPS));
	assert(calcAverage({ 3,4,2,4,5 }), EqualsWithDelta(3.6, EPS));
	std::cout << "Test is good!" << std::endl;
}

double calcAverage(const std::vector<int>& values) {
	double summ = 0;
	for (int i = 0; i < values.size(); i++) {
		summ += values[i];
	}
	return summ / values.size();
}
