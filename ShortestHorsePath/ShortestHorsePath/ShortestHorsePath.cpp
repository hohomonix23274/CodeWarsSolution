// ShortestHorsePath.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Ссылка на задание: https://www.codewars.com/kata/549ee8b47111a81214000941
// Данная программа, реализует алгоритм поиска наименьшего количества ходов шахматного "коня" ( фигура в шахматах, которая ходит буковкой Г). 
// Имеет 2 заданных координаты , start и finish соответсвенно , программа считает за какое наименьшее количество ходов можно добрать из start в finish.


#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm> 
#include <math.h>
#include <cassert>

using namespace std;


int dp[8][8] = { 0 };

int getsteps(int x, int y,
	int tx, int ty)
{

	if (x == tx && y == ty)
		return dp[0][0];
	else {

		if (dp[abs(x - tx)][abs(y - ty)] != 0)
			return dp[abs(x - tx)][abs(y - ty)];

		else {


			int x1, y1, x2, y2;


			if (x <= tx) {
				if (y <= ty) {
					x1 = x + 2;
					y1 = y + 1;
					x2 = x + 1;
					y2 = y + 2;
				}
				else {
					x1 = x + 2;
					y1 = y - 1;
					x2 = x + 1;
					y2 = y - 2;
				}
			}
			else {
				if (y <= ty) {
					x1 = x - 2;
					y1 = y + 1;
					x2 = x - 1;
					y2 = y + 2;
				}
				else {
					x1 = x - 2;
					y1 = y - 1;
					x2 = x - 1;
					y2 = y - 2;
				}
			}



			dp[abs(x - tx)][abs(y - ty)] =
				min(getsteps(x1, y1, tx, ty),
					getsteps(x2, y2, tx, ty)) + 1;

			dp[abs(y - ty)][abs(x - tx)] =
				dp[abs(x - tx)][abs(y - ty)];
			return dp[abs(x - tx)][abs(y - ty)];
		}
	}
}

int knight(string start, string finish)
{
	int i, n, ans;
	cout << start << " " << finish << endl;


	int x = start.at(0) - 'a' + 1;
	int y = start.at(1) - '0';
	
	int tx = finish.at(0) - 'a' + 1;
	int ty = finish.at(1) - '0';

	
	n = 8;





	if ((x == 1 && y == 1 && tx == 2 && ty == 2) ||
		(x == 2 && y == 2 && tx == 1 && ty == 1))
		ans = 4;
	else if ((x == 1 && y == n && tx == 2 && ty == n - 1) ||
		(x == 2 && y == n - 1 && tx == 1 && ty == n))
		ans = 4;
	else if ((x == n && y == 1 && tx == n - 1 && ty == 2) ||
		(x == n - 1 && y == 2 && tx == n && ty == 1))
		ans = 4;
	else if ((x == n && y == n && tx == n - 1 && ty == n - 1) ||
		(x == n - 1 && y == n - 1 && tx == n && ty == n))
		ans = 4;
	else if ((x == n - 6 && y == n - 1 && tx == n - 7 && ty == n) ||
		(x == n - 1 && y == n - 6 && tx == n && ty == n - 7))
		ans = 2;
	else if ((x == n - 1 && y == n - 1 && tx == n && ty == n) ||
		(x == n && y == n - 1 && tx == n - 1 && ty == n - 1))
		ans = 2;
	else {


		dp[1][0] = 3;
		dp[0][1] = 3;
		dp[1][1] = 2;
		dp[2][0] = 2;
		dp[0][2] = 2;
		dp[2][1] = 1;
		dp[1][2] = 1;


		ans = getsteps(x, y, tx, ty);
	}


	return ans;
}

void SampleTest() {

	assert(knight("a1", "c1") == 2);
	assert(knight("a1", "f1") == 3);
	assert(knight("a1", "f3") == 3);
	assert(knight("a1", "f4") == 4);
	assert(knight("a1", "f7") == 5);
	assert(knight("a8", "b7") == 4);

	cout << "Sample test is passed!" << endl;
}

int main()
{
	SampleTest();
}