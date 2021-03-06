// Maximum Length.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/maximum-length-difference


#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

void SampleTest();

int main()
{
	SampleTest();
}

class MaxDiffLength
{
public:
	static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
	{
		int max = -1;
		for (auto const & a : a1)
			for (auto const & b : a2)
				max = std::max(max, std::abs(int(a.size()) - int(b.size())));
		return max;
	}
};

	void testequal(int ans, int sol) 
	{
		assert(ans, Equals(sol));
	}
	void dotest(std::vector<std::string> &a1, std::vector<std::string> &a2, int expected)
	{
		testequal(MaxDiffLength::mxdiflg(a1, a2), expected);
	}
	void SampleTest()
	{
		std::vector<std::string> s1 = { "hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz" };
		std::vector<std::string> s2 = { "cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww" };
		dotest(s1, s2, 13);
		s1 = { "ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh" };
		s2 = { "bbbaaayddqbbrrrv" };
		dotest(s1, s2, 10);
		std::cout << "All test is cool!" << std::endl;
	}