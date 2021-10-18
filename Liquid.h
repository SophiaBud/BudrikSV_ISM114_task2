#pragma once
#include <iostream>
#include <string>
using namespace std;

#pragma once
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
	Liquid(const string& n, double d);

	// ������ �������������� � ��������� ���������:
	void SetDensity(double d);
	double const GetDensity();

	/// <summary>
	/// ����� ������ ������ �� �����
	/// </summary>
	void const Print();
};