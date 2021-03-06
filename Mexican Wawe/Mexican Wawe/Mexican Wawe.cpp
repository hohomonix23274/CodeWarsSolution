// Mexican Wawe.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: https://www.codewars.com/kata/mexican-wave/train/cpp

#include "pch.h"
#include <iostream>
#include <cctype> 
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> wave(string y);
void SampleTest();

int main()
{
	SampleTest();
}

vector<string> wave(string y) {
	vector<string> out;
	string x = y;

	for (int i = 0; i < y.size(); i++)
	{
		if (y[i] == ' ') continue;
		x[i] = toupper(x[i]);
		out.push_back(x);
		x = y;
	}

	return out;
}

void SampleTest() {
	assert(wave("hello") == (std::vector<std::string> {"Hello", "hEllo", "heLlo", "helLo", "hellO"}));
	assert(wave("codewars") == (std::vector<std::string> {"Codewars", "cOdewars", "coDewars", "codEwars", "codeWars", "codewArs", "codewaRs", "codewarS"}));
	assert(wave("") == (std::vector<std::string> {}));
	assert(wave("two words") == (std::vector<std::string> {"Two words", "tWo words", "twO words", "two Words", "two wOrds", "two woRds", "two worDs", "two wordS"}));
	assert(wave(" gap ") == (std::vector<std::string> {" Gap ", " gAp ", " gaP "}));
	cout << "All sample test passed!" << endl;
}