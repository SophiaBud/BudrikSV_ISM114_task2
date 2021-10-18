#pragma once
#include "Alcohol.h"

int main()
{
	system("chcp 1251");
	system("cls");

	constexpr double d1 = 1000;
	constexpr double d2 = 951;
	constexpr unsigned k2 = 60;
	constexpr unsigned k3 = 45;
	constexpr unsigned d3 = 999;

	Liquid liq = Liquid("вода чистая", d1);
	Alcohol alc = Alcohol("виски", d2, k2);

	cout << "Жидкость." << endl;
	liq.Print(); cout << endl;

	cout << "Алкоголь." << endl;
	alc.Print(); cout << endl;
	
	alc.SetStrength(k3);
	liq.SetDensity(d3);
	
	cout << endl << "Поменяли крепость алкоголя и плотность жидкости: " << endl;
	
	cout << "Жидкость." << endl;
	liq.Print(); cout << endl;

	cout << "Алкоголь." << endl;
	alc.Print(); cout << endl;

	liq = alc;
	cout << endl << "Принцип подстановки: жидкость := алкоголь. Жидкость: " << endl;
	liq.Print(); cout << endl;
	
	system("pause");
	
	return 0;
}