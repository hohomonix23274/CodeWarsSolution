// AlphabetWars.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//ССылка на задачу: https://www.codewars.com/kata/59377c53e66267c8f6000027
// Данная программа является игрой, мы имеем 2 набора символов, каждый из них имеет свое значение. Если введем больше "положительных" символов
//получим победу - "левых", наоборот - "правых".

#include "pch.h"
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string alphabetWar(string fight)
{
	
	int scorepoint = 0;
	
	for (char letter : fight)
	{
		switch (letter)
		{
		case 's':  scorepoint += 1;  break;
		case 'b':  scorepoint += 2;  break;
		case 'p':  scorepoint += 3;  break;
		case 'w':  scorepoint += 4;  break;
		case 'z':  scorepoint -= 1;  break;
		case 'd':  scorepoint -= 2;  break;
		case 'q':  scorepoint -= 3;  break;
		case 'm':  scorepoint -= 4;  break;
		}
	}



	if (scorepoint < 0)
		return  "Right side wins!";
	else if (scorepoint > 0)
		return "Left side wins!";
	else
		return "Let's fight again!";
}

void SampleTest()
{

	assert(alphabetWar("zdqmwpbs") == "Let's fight again!");
	assert(alphabetWar("zzzzs") == "Right side wins!");
	assert(alphabetWar("zzz") == "Right side wins!");
	assert(alphabetWar("wwwwww") == "Left side wins!");
	assert(alphabetWar("zzwwww") == "Left side wins!");
	cout << "Sample test is passed!" << endl;

}


int main()
{

	SampleTest();
}