#include <iostream>
using namespace std;

#include "Jiyeon.h" //Jiyeon ��� ���� ���� ���� ���� ���
#include "Money.h" //Money ��� ���� ���� ���� ���� ���

void Money::returnmoney() {

	int change = nowmoney;

	cout << "�ࢺ������������������������ȯ��������������������\n";
	thirdscreen();
	cout << "�ࡡ����������������¥�������� �� " << change / 1000 << "������\t��\n";
	cout << "�ࡡ����������������¥�������� �� " << (change % 1000) / 500 << "������\t��\n";
	cout << "�ࡡ����������������¥�������� �� " << ((change % 1000) % 500) / 100 << "������\t��\n";
	
}

void Money::salesmoney() {
	secondscreen();
	cout << "�ࢺ�����������Ǳ⡡�Ǹš����⡡���⡡������������\n";
	thirdscreen();
	cout << "��\t�������ѡ������ �� " << totalsales + lastmoney - nowmoney << "��\t������\t��\n";
	secondscreen();
}