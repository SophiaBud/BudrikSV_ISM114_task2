#include <iostream>
using namespace std;

/// <summary>
/// ������� ����� "��������"
/// </summary>
class Liquid
{
private:
	/// <summary>
	/// �������� ��������
	/// </summary>
	string name;

	/// <summary>
	/// ���������, ��/�3
	/// </summary>
	double density;
public:
	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="n">��������</param>
	/// <param name="d">���������</param>
	Liquid(string n, double d)
	{
		name = n;
		density = d;
	}

	// ������ �������������� � ��������� ���������:
	void SetDensity(double d)
	{
		if (d <= 0)
		{
			throw "������! ��������� �������� ������ ���� ������������� ���������!";
			system("pause");
			exit(1);
		}
		density = d;
	}
	double GetDensity() { return density; }
	
	/// <summary>
	/// ����� ������ ������ �� �����
	/// </summary>
	void Print()
	{
		cout << "��������: " << name << "; ���������: " << GetDensity() << " �� / �3";
	}
};

/// <summary>
/// ����� "��������" - ����������� �� ������ "��������"
/// </summary>
class Alcohol : public Liquid
{
private:
	/// <summary>
	/// �������� ��������, %
	/// </summary>
	int strength;
public:
	Alcohol(string n, double d, 
		int s) : Liquid(n, d)
	{
		strength = s;
	}

	// ������ �������������� � ��������� ��������:
	void SetStrength(int s)
	{
		if (s < 0 || s > 100)
		{
			throw "������! �������� �������� ����� ���� ��������� �� 0 �� 100!";
			system("pause");
			exit(1);
		}
		strength = s;
	}
	double GetStrength() { return strength; }
	
	/// <summary>
	/// ����� ������ ������ �� �����
	/// </summary>
	void Print()
	{
		Liquid::Print(); // ����� ������ �������� ������
		cout << "; �������� : " << GetStrength() << "%";
	}
};

int main()
{
	system("chcp 1251");
	system("cls");

	Liquid liq = Liquid("���� ������", 1000);
	Alcohol alc = Alcohol("�����", 951, 60);

	cout << "��������." << endl;
	liq.Print(); cout << endl;

	cout << "��������." << endl;
	alc.Print(); cout << endl;
	
	alc.SetStrength(45);
	liq.SetDensity(999);
	
	cout << endl << "�������� �������� �������� � ��������� ��������: " << endl;
	
	cout << "��������." << endl;
	liq.Print(); cout << endl;

	cout << "��������." << endl;
	alc.Print(); cout << endl;

	liq = alc;
	cout << endl << "������� �����������: �������� := ��������. ��������: " << endl;
	liq.Print(); cout << endl;
	
	system("pause");
	
	return 0;
}