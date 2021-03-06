// Cat and Mouse - Harder Version.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

std::string catMouse(std::string field, unsigned int jump)
{
	int cat = field.find('C');
	int mouse = field.find('m');
	int dog = field.find('D');



	if (dog == -1 || cat == -1 || mouse == -1)
	{
		return "boring without all three";
	}
	if (abs(mouse - cat) > jump)
	{
		return "Escaped!";
	}
	if ((cat < dog && dog < mouse) || (cat > dog && dog > mouse))
	{
		return "Protected!";
	}
	
	return "Caught!";

}

void SampleTest()
{
	assert(catMouse("..D.....Cm", 13) == ("Caught!"));
	assert(catMouse("............C.............D..m...", 8) == ("Escaped!"));
	assert(catMouse("m.C...", 5) == ("boring without all three"));
	assert(catMouse(".CD......m.", 10) == ("Protected!"));
	assert(catMouse("..D.....C.m", 2) == ("Caught!"));
	std::cout << "All is good" << std::endl;
}