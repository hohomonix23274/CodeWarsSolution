// I love you, a little , a lot, passionately.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: https://www.codewars.com/kata/i-love-you-a-little-a-lot-passionately-dot-dot-dot-not-at-all/train/cpp

#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;
string how_much_i_love_you(int nb);
void SampleTest();
int main()
{
	SampleTest();
}

string how_much_i_love_you(int nb) {

	switch ((nb - 1) % 6) {
	case 0: return "I love you";
	case 1: return "a little";
	case 2: return "a lot";
	case 3: return "passionately";
	case 4: return "madly";
	case 5: return "not at all";
	}
	return std::string();
}

void SampleTest() {
	assert(how_much_i_love_you(7) == ("I love you"));
	assert(how_much_i_love_you(3) == ("a lot"));
	assert(how_much_i_love_you(6) == ("not at all"));
	cout << "All sample test passed!" << endl;
}