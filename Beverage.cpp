#include <iostream>
using namespace std;

#include "Beverage.h" //Beverage ��� ���� ���� ���� ���� ���
#include "Money.h" //Money ��� ���� ���� ���� ���� ���


void Beverage::addbeverage(int i) {

	cout << "��  " << i+1 << " ��  ��  " << Name[i]  << "\t\t" << Quantity[i] << "��\t" << Cost[i] << "��\t��\n";

}

void Beverage::choicebeverage(int menu) {
	
	int quantity = Quantity[menu];
	cout << "��  " << menu + 1 << " ��  ��  " << Name[menu] << "\t\t" << quantity - 1 << "��\t" << Cost[menu] << "��\t��\n";	
	Quantity[menu] = quantity - 1;

}

void Beverage::zerobeverage(int i) {
	int quantity = Quantity[i]; //int quantity�� �迭 Quantity[i]�� �Ҵ�
	quantity = 0; //quantity�� 0 �Ҵ�
	Quantity[i] = quantity; //�迭 Quantity[i]�� quantity�� �Ҵ�
}

void Beverage::resetbeverage() {
	int a = Quantity[0]; //int a�� �迭 Quantity[0] �Ҵ�
	a = 7; //a�� 7 �Ҵ�
	Quantity[0] = a; //Quantity[0]�� a �Ҵ�

	int b = Quantity[1];
	b = 6;
	Quantity[1] = b;

	int c = Quantity[2];
	c = 5;
	Quantity[2] = c;

	int d = Quantity[3];
	d = 7;
	Quantity[3] = d;

	int e = Quantity[4];
	e = 5;
	Quantity[4] = e;

	int f = Quantity[5];
	f = 6;
	Quantity[5] = f;

	int g = Quantity[6];
	g = 4;
	Quantity[6] = g;

}