// Is he gonna survive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Ссылка на задание: https://www.codewars.com/kata/59ca8246d751df55cc00014c
// Хватит ли пуль у рыцаря, чтобы убить драконов?
//

#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;


bool hero(int bullets, int dragons) {
	if (2 * dragons > bullets) return false;
	return true;
}

void SampleTest() {
	assert(hero(10 , 5) == (1));
	assert(hero(20, 25) == (0));
	assert(hero(3 , 1) == (1));
	assert(hero(5, 3) == (0));
	cout << "SampleTest is okay!" << endl;
}

int main()
{
	SampleTest();
}
