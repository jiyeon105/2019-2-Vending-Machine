/*
자판기 프로그램을 만드시오.
자판기 프로그램은 동전 또는 지폐를 넣고 자판기에서 판매하는 다양한 상품을 구매하는 형식으로 만드시오.
판매하는 제품과 가격은 각 개인이 선택하되, 프로그램이 시작하면 각 판매 상품마다의 수량이 고정되어 있어야 한다.
특정 상품의 재고가 없는 경우 화면에 재고가 없음을 표시하시오.
자판기 판매 매출 정보를 확인 할 수 있어야 하며, 자판기를 초기화 하는 기능도 추가하시오.
구현의 예는 아래의 그림을 참고하시오.

최종 완성 일자: 2019년 12월 10일
작성자: 19120068 강지연
*/

#include <iostream>
#include <string.h>
using namespace std;

#include "Jiyeon.h" //Jiyeon 헤더 파일 갖고 오기 위해 사용
#include "Beverage.h" //Beverage 헤더 파일 갖고 오기 위해 사용
#include "Money.h" //Money 헤더 파일 갖고 오기 위해 사용

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

			for (int i = 0; i < 7; i++) { //초기의 음료수 화면 출력
				beverage.addbeverage(i);
			}
			jiyeon.secondscreen();
			jiyeon.menukey();
			jiyeon.secondscreen();

			int op;

			do {
				cout << "　▶";
				cin >> op; //동전을 얼마나 투입할 건지 입력
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
					cout << "□　　　　　　돈을　넣을　수　없습니다　　　　　□\n";

			} while (1);
			cout << "□　　　　　　　　동전　투입　완료　　　　　　　□\n";
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
				cout << "　▶";
				cin >> menu; //메뉴 고르기

				switch (menu) {
				case 1: 
					if (money.getmoney() < 700) //만약 현재 금액이 음료수 값보다 작으면
					{
						jiyeon.fourthscreen(); //돈 부족 멘트 출력
						break;
					}
					else //선택한 음료수 개수가 빠져나가는 것을 보여 줌
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
					menu = 8; //menu에 8 저장
					cout << "　▶메뉴를　다　골랐습니다\n";
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

				cout << "　▶";
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

			cout << "　▶";
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