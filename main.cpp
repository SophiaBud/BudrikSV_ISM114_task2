#include <iostream>
using namespace std;

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
	Liquid(string n, double d)
	{
		name = n;
		density = d;
	}

	// Методы переназначения и изменения плотности:
	void SetDensity(double d)
	{
		if (d <= 0)
		{
			throw "Ошибка! Плотность жидкости должна быть положительным значением!";
			system("pause");
			exit(1);
		}
		density = d;
	}
	double GetDensity() { return density; }
	
	/// <summary>
	/// Метод вывода данных на экран
	/// </summary>
	void Print()
	{
		cout << "Название: " << name << "; плотность: " << GetDensity() << " кг / м3";
	}
};

/// <summary>
/// класс "Алкоголь" - производный от класса "Жидкость"
/// </summary>
class Alcohol : public Liquid
{
private:
	/// <summary>
	/// Крепость алкоголя, %
	/// </summary>
	int strength;
public:
	Alcohol(string n, double d, 
		int s) : Liquid(n, d)
	{
		strength = s;
	}

	// Методы переназначения и изменения крепости:
	void SetStrength(int s)
	{
		if (s < 0 || s > 100)
		{
			throw "Ошибка! Крепость алкоголя может быть значением от 0 до 100!";
			system("pause");
			exit(1);
		}
		strength = s;
	}
	double GetStrength() { return strength; }
	
	/// <summary>
	/// Метод вывода данных на экран
	/// </summary>
	void Print()
	{
		Liquid::Print(); // вызов метода базового класса
		cout << "; крепость : " << GetStrength() << "%";
	}
};

int main()
{
	system("chcp 1251");
	system("cls");

	Liquid liq = Liquid("вода чистая", 1000);
	Alcohol alc = Alcohol("виски", 951, 60);

	cout << "Жидкость." << endl;
	liq.Print(); cout << endl;

	cout << "Алкоголь." << endl;
	alc.Print(); cout << endl;
	
	alc.SetStrength(45);
	liq.SetDensity(999);
	
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