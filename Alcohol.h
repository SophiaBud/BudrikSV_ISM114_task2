#pragma once
#include "Liquid.h"

/// <summary>
/// класс "Алкоголь" - производный от класса "Жидкость"
/// </summary>
class Alcohol : public Liquid
{
private:
	/// <summary>
	/// Крепость алкоголя, %
	/// </summary>
	unsigned strength;
public:
	Alcohol(const string& n, double d,
		unsigned s);

	// Методы переназначения и изменения крепости:
	void SetStrength(unsigned s);
	double const GetStrength();

	/// <summary>
	/// Метод вывода данных на экран
	/// </summary>
	void const Print();
};