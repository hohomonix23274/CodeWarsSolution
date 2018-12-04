﻿// Disemvowel Trolls.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Ссылка на программу: https://www.codewars.com/kata/52fba66badcd10859f00097e
// Данная прогрмамма удаляет все гласные буквы из вводной строки, используется английская раскладка, буква y и Y не считаются гласными.

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;
string disemvowel(string str)
{
	char deletedelements[] = "AaIiEeOoUu";

	for (unsigned int i = 0; i < strlen(deletedelements); ++i) {
		str.erase(std::remove(str.begin(), str.end(), deletedelements[i]), str.end());
	}


	return str;
}

void SampleTest() {

	assert(disemvowel("This website is for losers LOL!") == "Ths wbst s fr lsrs LL!");
	assert(disemvowel("FGANU") == "FGN");
	assert(disemvowel("Sample Test is okay") == "Smpl Tst s ky");
	cout << "Sample Test is ok" << endl;
}

int main()
{
	SampleTest();
}


