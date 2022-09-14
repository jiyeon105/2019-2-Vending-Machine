#include <iostream>
using namespace std;

#include "Beverage.h" //Beverage 헤더 파일 갖고 오기 위해 사용
#include "Money.h" //Money 헤더 파일 갖고 오기 위해 사용


void Beverage::addbeverage(int i) {

	cout << "□  " << i+1 << " 번  ：  " << Name[i]  << "\t\t" << Quantity[i] << "개\t" << Cost[i] << "원\t□\n";

}

void Beverage::choicebeverage(int menu) {
	
	int quantity = Quantity[menu];
	cout << "□  " << menu + 1 << " 번  ：  " << Name[menu] << "\t\t" << quantity - 1 << "개\t" << Cost[menu] << "원\t□\n";	
	Quantity[menu] = quantity - 1;

}

void Beverage::zerobeverage(int i) {
	int quantity = Quantity[i]; //int quantity에 배열 Quantity[i]를 할당
	quantity = 0; //quantity에 0 할당
	Quantity[i] = quantity; //배열 Quantity[i]에 quantity에 할당
}

void Beverage::resetbeverage() {
	int a = Quantity[0]; //int a에 배열 Quantity[0] 할당
	a = 7; //a에 7 할당
	Quantity[0] = a; //Quantity[0]에 a 할당

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