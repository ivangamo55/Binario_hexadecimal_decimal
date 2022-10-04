// Binario_hexadecimal_decimal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <stdio.h>
#include<conio.h>
#include<Windows.h>
#include "Dbh.h"

using namespace std;
Dbh::Dbh() {}

void Dbh::deci() {
	int z, x, numero, n2 = 0;
	int binario[1000]{};
	binario[0] = 0;

	cout << "Introduce el decimal que desee convertir\n";
	cin >> numero;


	for (x = 0; x < 1000; x++) {
		binario[x] = numero % 2;
		numero = numero / 2;
		if (numero == 0)
			break;
	}

	for (z = x; z >= 0; z--) {
		cout << binario[z];
	}
}

void Dbh::bin() {
	cout << "Introduzca el numero binario que desea convertir a decimal\n ";
	cin >> n;
	int dec = 0, i = 0, rem;

	while (n != 0) {
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
		cout << dec<<endl;
	}
}

void Dbh::run() {
	int sw;
	cout << "Que desea convertir\n";
	cout << "1.-Decimal\n2.-Binario\n3.-Hexadecimal\n";
	cin >> sw;
	switch (sw) {
	case 0:
		break;
	case 1:
		deci();
		break;
	case 2:
		bin();
		break;
	case 3:
		break;
	default:
		cout << "Opcion incorrecta";

	}
	system("pause");
	system("cls");
}

int main()
{
	Dbh a;
	a.run();
	return main();
}