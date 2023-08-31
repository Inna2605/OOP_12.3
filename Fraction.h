#include<iostream>
#pragma once
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int Num, int Den);

	void setNumerator();
	void setDenominator();
	int getNumerator();
	int getDenominator();

	void Show();

	Fraction operator=(Fraction &Fract);
	Fraction operator=(int n);
};
std::ostream& operator<<(std::ostream& os, Fraction& Fract);
