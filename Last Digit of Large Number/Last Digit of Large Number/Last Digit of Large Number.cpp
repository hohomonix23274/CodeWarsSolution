// Last Digit of Large Number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: https://www.codewars.com/kata/last-digit-of-a-large-number/train/cpp

#include "pch.h"
#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int last_digit(string str1, string str2);
void SampleTest();

int main()
{
	SampleTest();
}

int last_digit(string str1, string str2) {
	int foo = str1[str1.size() - 1] - '0';
	int bar = str2[str2.size() - 1] - '0';
	int foobar = str2[str2.size() - 2] - '0';
	if (str2.size() < 2)
	{
		int res = (int)pow(foo, bar) % 10;
		return res;
	}
	else
	{
		int res = (10 * foobar + bar) % 4;
		return res == 0 ? (int)pow(foo, 4) % 10 : (int)pow(foo, res) % 10;
	}
}

void SampleTest() {
	assert(last_digit("4", "1") == (4));
	assert(last_digit("4", "2") == (6));
	assert(last_digit("9", "7") == (9));
	assert(last_digit("10", "10000000000") == (0));
	assert(last_digit("1606938044258990275541962092341162602522202993782792835301376", "2037035976334486086268445688409378161051468393665936250636140449354381299763336706183397376") == (6));
	assert(last_digit("3715290469715693021198967285016729344580685479654510946723", "68819615221552997273737174557165657483427362207517952651") == (7));
	cout << "All sample test is cool!" << endl;
}