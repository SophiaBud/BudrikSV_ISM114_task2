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
		throw "������! ��������� �������� ������ ���� ������������� ���������!";
		system("pause");
		exit(1);
	}
	density = d;
}

double const Liquid::GetDensity() { return density; }

void const Liquid::Print()
{
	cout << "��������: " << name << "; ���������: " << GetDensity() << " �� / �3";
}