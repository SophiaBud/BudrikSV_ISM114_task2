#include "Alcohol.h"

Alcohol::Alcohol(const string& n, double d,
	unsigned s) : Liquid(n, d)
{
	strength = s;
}

void Alcohol::SetStrength(unsigned s)
{
	if (s < 0 || s > 100)
	{
		throw "Ошибка! Крепость алкоголя может быть значением от 0 до 100!";
		system("pause");
		exit(1);
	}
	strength = s;
}
double const Alcohol::GetStrength() { return strength; }

void const Alcohol::Print()
{
	Liquid::Print(); // вызов метода базового класса
	cout << "; крепость : " << GetStrength() << "%";
}