#include "Liquid.h"

Liquid::Liquid(const string& n, double d)
{
	name = n;
	SetDensity(d);
}

void Liquid::SetDensity(double d)
{
	if (d <= 0)
	{
		throw "Ошибка! Плотность жидкости должна быть положительным значением!";
		system("pause");
		exit(1);
	}
	density = d;
}

double const Liquid::GetDensity() { return density; }

void const Liquid::Print()
{
	cout << "Название: " << name << "; плотность: " << GetDensity() << " кг / м3";
}