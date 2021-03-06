// HTML dynamic color string generation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/html-dynamic-color-string-generation/train/cpp

#include "pch.h"
#include <iostream>
#include <string>
#include <cassert>
#include <stdlib.h>

void SampleTest();

int main()
{
	SampleTest();
}

class GenerateColorRGB
{

	public:
		static string generateColor(int randomNumber)
		{
			std::string gencolor = "#";
			std::string hex = "0123456789ABCDEF";
			for (int i = -6; i < 0; i++)
				{
					gencolor += hex[rand() % 16];
				}
			return gencolor;
		}

};

void SampleTest()
{
	assert(GenerateColorRGB::generateColor(rand() % 0x1000001).substr(0, 1) == ("#"));
	std::cout << "All is good" << std::endl;
}
