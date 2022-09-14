/*
���Ǳ� ���α׷��� ����ÿ�.
���Ǳ� ���α׷��� ���� �Ǵ� ���� �ְ� ���Ǳ⿡�� �Ǹ��ϴ� �پ��� ��ǰ�� �����ϴ� �������� ����ÿ�.
�Ǹ��ϴ� ��ǰ�� ������ �� ������ �����ϵ�, ���α׷��� �����ϸ� �� �Ǹ� ��ǰ������ ������ �����Ǿ� �־�� �Ѵ�.
Ư�� ��ǰ�� ��� ���� ��� ȭ�鿡 ��� ������ ǥ���Ͻÿ�.
���Ǳ� �Ǹ� ���� ������ Ȯ�� �� �� �־�� �ϸ�, ���Ǳ⸦ �ʱ�ȭ �ϴ� ��ɵ� �߰��Ͻÿ�.
������ ���� �Ʒ��� �׸��� �����Ͻÿ�.

���� �ϼ� ����: 2019�� 12�� 10��
�ۼ���: 19120068 ������
*/

#include <iostream>
#include <string.h>
using namespace std;

#include "Jiyeon.h" //Jiyeon ��� ���� ���� ���� ���� ���
#include "Beverage.h" //Beverage ��� ���� ���� ���� ���� ���
#include "Money.h" //Money ��� ���� ���� ���� ���� ���

int main() {
	Jiyeon jiyeon;
	Beverage beverage;
	Money money;

	char menu2;
	char menu3;
	char i;

	do
	{
		do
		{
			jiyeon.firstscreen();

			for (int i = 0; i < 7; i++) { //�ʱ��� ����� ȭ�� ���
				beverage.addbeverage(i);
			}
			jiyeon.secondscreen();
			jiyeon.menukey();
			jiyeon.secondscreen();

			int op;

			do {
				cout << "����";
				cin >> op; //������ �󸶳� ������ ���� �Է�
				money.getmoney();
				if (op == 100) {
					money.inmoney(100);
					money.totalmoney();
				}
				else if (op == 500) {
					money.inmoney(500);
					money.totalmoney();
				}
				else if (op == 1000) {
					money.inmoney(1000);
					money.totalmoney();
				}
				else if (op == 0)
					break;
				else if (op != 100 || op != 500 || op != 1000)
					cout << "�ࡡ�������������������������������ϴ١�����������\n";

			} while (1);
			cout << "�ࡡ�����������������������ԡ��Ϸᡡ��������������\n";
			money.savemoney();

			jiyeon.secondscreen();
			system("cls");

			jiyeon.firstscreen();

			for (int i = 0; i < 7; i++) {
				beverage.addbeverage(i);
			}
			jiyeon.choicemenu2();
			jiyeon.secondscreen();
			money.totalmoney();

			jiyeon.choicemenu1();
			jiyeon.thirdscreen();

			int menu;

			do {
				cout << "����";
				cin >> menu; //�޴� ����

				switch (menu) {
				case 1: 
					if (money.getmoney() < 700) //���� ���� �ݾ��� ����� ������ ������
					{
						jiyeon.fourthscreen(); //�� ���� ��Ʈ ���
						break;
					}
					else //������ ����� ������ ���������� ���� ���� ��
					{
						system("cls");
						jiyeon.firstscreen();
						beverage.choicebeverage(0);
						for (int i = 1; i < 7; i++) {
							beverage.addbeverage(i);
						}
						jiyeon.choicemenu2();
						jiyeon.secondscreen();
						money.outmoney(700);
						money.totalmoney2();
						jiyeon.choicemenu1();
						jiyeon.thirdscreen();
						continue;
					}
				case 2:
					if (money.getmoney() < 700)
					{
						jiyeon.fourthscreen();
						break;
					}
					else
					{
						system("cls");
						jiyeon.firstscreen();
						beverage.addbeverage(0);
						beverage.choicebeverage(1);
						for (int i = 2; i < 7; i++) {
							beverage.addbeverage(i);
						}
						jiyeon.choicemenu2();
						jiyeon.secondscreen();
						money.outmoney(700);
						money.totalmoney2();
						jiyeon.choicemenu1();
						jiyeon.thirdscreen();
						continue;
					}
				case 3:
					if (money.getmoney() < 1000)
					{
						jiyeon.fourthscreen();
						break;
					}
					else
					{
						system("cls");
						jiyeon.firstscreen();
						beverage.addbeverage(0);
						beverage.addbeverage(1);
						beverage.choicebeverage(2);
						for (int i = 3; i < 7; i++) {
							beverage.addbeverage(i);
						}
						jiyeon.choicemenu2();
						jiyeon.secondscreen();
						money.outmoney(1000);
						money.totalmoney2();
						jiyeon.choicemenu1();
						jiyeon.thirdscreen();
						continue;
					}
				case 4:
					if (money.getmoney() < 600)
					{
						jiyeon.fourthscreen();
						break;
					}
					else
					{
						system("cls");
						jiyeon.firstscreen();
						for (int i = 0; i < 3; i++) {
							beverage.addbeverage(i);
						}
						beverage.choicebeverage(3);
						for (int i = 4; i < 7; i++) {
							beverage.addbeverage(i);
						}
						jiyeon.choicemenu2();
						jiyeon.secondscreen();
						money.outmoney(600);
						money.totalmoney2();
						jiyeon.choicemenu1();
						jiyeon.thirdscreen();
						continue;
					}
				case 5:
					if (money.getmoney() < 800)
					{
						jiyeon.fourthscreen();
						break;
					}
					else
					{
						system("cls");
						jiyeon.firstscreen();
						for (int i = 0; i < 4; i++) {
							beverage.addbeverage(i);
						}
						beverage.choicebeverage(4);
						for (int i = 5; i < 7; i++) {
							beverage.addbeverage(i);
						}
						jiyeon.choicemenu2();
						jiyeon.secondscreen();
						money.outmoney(800);
						money.totalmoney2();
						jiyeon.choicemenu1();
						jiyeon.thirdscreen();
						continue;
					}
				case 6:
					if (money.getmoney() < 700)
					{
						jiyeon.fourthscreen();
						break;
					}
					else
					{
						system("cls");
						jiyeon.firstscreen();
						for (int i = 0; i < 5; i++) {
							beverage.addbeverage(i);
						}
						beverage.choicebeverage(5);
						for (int i = 6; i < 7; i++) {
							beverage.addbeverage(i);
						}
						jiyeon.choicemenu2();
						jiyeon.secondscreen();
						money.outmoney(700);
						money.totalmoney2();
						jiyeon.choicemenu1();
						jiyeon.thirdscreen();
						continue;
					}
				case 7:
					if (money.getmoney() < 600)
					{
						jiyeon.fourthscreen();
						break;
					}
					else
					{
						system("cls");
						jiyeon.firstscreen();
						for (int i = 0; i < 6; i++) {
							beverage.addbeverage(i);
						}
						beverage.choicebeverage(6);
						jiyeon.choicemenu2();
						jiyeon.secondscreen();
						money.outmoney(600);
						money.totalmoney2();
						jiyeon.choicemenu1();
						jiyeon.thirdscreen();
						continue;
					}
				case 8:
					menu = 8; //menu�� 8 ����
					cout << "�����޴������١�������ϴ�\n";
					continue;
				default:
					jiyeon.errorscreen();
					break;
				}
			} while (menu != 8);

			do
			{
				jiyeon.secondscreen();
				jiyeon.choicemenu3();
				jiyeon.secondscreen();

				cout << "����";
				cin >> menu2;

				switch (menu2)
				{
				case 'm':
				case 'M':
					i = 'a';
					menu2 = 'm';
					jiyeon.secondscreen();
					money.returnmoney();
					jiyeon.secondscreen();
					continue;
				case 'n':
				case 'N':
					i = 'a';
					money.totalsalesmoney();
					system("cls");
					continue;
				default:
					i = 'b';
					jiyeon.errorscreen();
					break;
				}
			} while (i != 'a');

		} while (menu2 != 'm');


		do
		{
			jiyeon.choicemenu4();
			jiyeon.secondscreen();

			cout << "����";
			cin >> menu3;

			switch (menu3)
			{
			case 'y':
			case 'Y':
				i = 'a';
				menu3 = 'y';
				money.salesmoney();
				money.totalsalesmoney();
				continue;
			case 'w':
			case 'W':
				i = 'a';
				system("cls");
				money.zeromoney();
				jiyeon.resetscreen();
				for (int i = 0; i < 7;  i++)
					beverage.zerobeverage(i);
				beverage.resetbeverage();
				break;
			default:
				i = 'b';
				jiyeon.errorscreen();
				break;
			}
		} while (i != 'a');
	}while (menu3 != 'y');
}