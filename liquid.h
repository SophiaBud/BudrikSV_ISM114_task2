#pragma once
#include <iostream>
#include <string>
using namespace std;

#pragma once
/// <summary>
/// Базовый класс "Жидкость"
/// </summary>
class Liquid
{
private:
	/// <summary>
	/// Название жидкости
	/// </summary>
	string name;

	/// <summary>
	/// Плотность, кг/м3
	/// </summary>
	double density;
public:
	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="n">название</param>
	/// <param name="d">плотность</param>
	Liquid(const string& n, double d);

	// Методы переназначения и изменения плотности:
	void SetDensity(double d);
	double const GetDensity();

	/// <summary>
	/// Метод вывода данных на экран
	/// </summary>
	void const Print();
};