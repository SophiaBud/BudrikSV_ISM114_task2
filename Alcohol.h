#pragma once
#include "Liquid.h"

/// <summary>
/// ����� "��������" - ����������� �� ������ "��������"
/// </summary>
class Alcohol : public Liquid
{
private:
	/// <summary>
	/// �������� ��������, %
	/// </summary>
	unsigned strength;
public:
	Alcohol(const string& n, double d,
		unsigned s);

	// ������ �������������� � ��������� ��������:
	void SetStrength(unsigned s);
	double const GetStrength();

	/// <summary>
	/// ����� ������ ������ �� �����
	/// </summary>
	void const Print();
};