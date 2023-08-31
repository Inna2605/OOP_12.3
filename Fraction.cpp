#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction()
{
	numerator = 0;
	denominator = 0;
}

Fraction::Fraction(int Num, int Den)
{
	numerator = Num;
	denominator = Den;
}

void Fraction::setNumerator()
{
	cout << "Введите числитель: ";
	cin >> numerator;
}

void Fraction::setDenominator()
{
	cout << "Введите знаменатель: ";
	cin >> denominator;
}

int Fraction::getNumerator()
{
	return numerator;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::Show()
{
	cout << " Числитель: " << numerator;
	cout << " Знаменатель: " << denominator;
}

Fraction Fraction::operator=(Fraction& Fract)
{
	numerator = Fract.numerator;
	denominator = Fract.denominator;
	return *this;
}

Fraction Fraction::operator=(int n)
{
	numerator = n;
	denominator = n;
	return *this;
}

ostream& operator<<(ostream& os, Fraction& Fract)
{
	os << " Числитель: " << Fract.getNumerator() << "\n Знаменатель: " << Fract.getDenominator() << endl << endl;
	return os;
}
