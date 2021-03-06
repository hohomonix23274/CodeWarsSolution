// Pillars.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задание: https://www.codewars.com/kata/5bb0c58f484fcd170700063d
// Нужно считать растояние между pillars, взависимоти от разных параметров ( ширина, расстояние между и количества ).
//

#include "pch.h"
#include <iostream>
#include <cassert>


long pillars(int num, int dis, int width) {
	return num == 1 ? 0 : --num * dis * 100 + --num*width;
} 

void SampleTest() {
	assert(pillars(1, 10, 10) == (0));
	assert(pillars(2, 20, 25) == (2000));
	assert(pillars(11, 15, 30), Equals(15270));
	cout << "SampleTest is okay!" << endl;
}

int main()
{
	SampleTest();
}

