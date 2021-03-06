// Deodorant Evaporator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//https://www.codewars.com/kata/5506b230a11c0aeab3000c1f

#include "pch.h"
#include <iostream>
#include <cassert>


void SampleTest();

int main()
{
	SampleTest();
}

class Evaporator
{

public:
	static int evaporator(double content, double evap_per_day, double threshold) {
		int result = 0;
		double percent = 100;
		while (percent > threshold) {
			percent = percent - percent * (evap_per_day / 100);
			result++;
		}
		return result;
	}
};

void testequal(int ans, int sol) {
	assert(ans == (sol));
}

void SampleTest()
	{
		testequal(Evaporator::evaporator(10, 10, 10), 22);
		testequal(Evaporator::evaporator(10, 10, 5), 29);
		std::cout << "Test is ok!" << std::endl;
	}