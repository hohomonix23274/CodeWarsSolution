// Multiplying numbers as strings.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

void SampleTest();
string multiply(string a, string b);

int main()
{
	SampleTest();
}

void SampleTest() {
	assert(multiply("2", "3") == ("6"));
	assert(multiply("30", "69") == ("2070"));
	assert(multiply("11", "85") == ("935"));

	assert(multiply("2", "0") == ("0"));
	assert(multiply("0", "30") == ("0"));
	assert(multiply("0000001", "3") == ("3"));
	assert(multiply("1009", "03") == ("3027"));

	assert(multiply("98765", "56894") == ("5619135910"));
	assert(multiply("1020303004875647366210", "2774537626200857473632627613") == ("2830869077153280552556547081187254342445169156730"));
	assert(multiply("58608473622772837728372827", "7586374672263726736374") == ("444625839871840560024489175424316205566214109298"));
	assert(multiply("9007199254740991", "9007199254740991") == ("81129638414606663681390495662081"));
	cout << "All is ok!" << endl;
}


string multiply(string a, string b) {

	if (a.empty() || b.empty()) return "0";

	vector<int> result(a.size() + b.size(), 0);
	int nA = 0, nB = 0, iA = 0, iB = 0;

	for (int i = a.size() - 1; i >= 0; i--)
	{
		int c = 0;
		nA = a[i] - '0';
		iB = 0;
		for (int j = b.size() - 1; j >= 0; j--)
		{
			nB = b[j] - '0';
			int sum = nA * nB + result[iA + iB] + c;
			c = sum / 10;
			result[iA + iB] = sum % 10;
			iB++;
		}
		if (c > 0) result[iA + iB] += c;
		iA++;
	}
	int i = result.size() - 1;
	while (i >= 0 && result[i] == 0)
		i--;

	if (i == -1) return "0";

	string res = "";
	while (i >= 0)
		res += to_string(result[i--]);

	return res;
}
