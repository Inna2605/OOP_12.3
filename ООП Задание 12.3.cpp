//Создать и инициализировать массив из 4-х объектов типа Дробь (Fraction) и записать этот массив в файл в бинарном режиме.
//Затем создать другой массив из 4-х объектов типа Дробь и считать в этот массив объекты из этого файла.

#include <iostream>
#include <fstream>
#include"Fraction.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	Fraction fraction1(4, 5);
	Fraction fraction2(3, 8);
	Fraction fraction3(1, 2);
	Fraction fraction4(14, 5);

	const int number = 4;
	Fraction array1[number];
	array1[0] = fraction1;
	array1[1] = fraction2;
	array1[2] = fraction3;
	array1[3] = fraction4;

	cout << "Первый массив из четырех объектов-дробей:\n\n";
	for (int i = 0; i < number; i++) {
		cout << array1[i] << endl;
	}

	//Записываем первый массив с объектами-дробями в файл Fraction 
	ofstream osFract("Fraction.txt", ios::binary);
	osFract.write((char*)array1, number * sizeof(Fraction));
	osFract.close();
	for (int i = 0; i < number; i++) {
		array1[i] = 0;
	}

	//Считываем из файла Fraction первый массив с объектами-дробями и помещаем их во второй массив
	Fraction array2[number];
	ifstream isFract("Fraction.txt", ios::binary);
	isFract.read((char*)array1, number * sizeof(Fraction));
	for (int j = 0; j < number; j++) {
		array2[j] = array1[j];
	}

	cout << "\n\nВторой массив с помещенными в него объектами-дробями из файла Fraction:\n\n";
	for (int k = 0; k < number; k++) {
		cout << array2[k] << endl;
	}
}