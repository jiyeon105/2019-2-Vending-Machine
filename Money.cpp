#include <iostream>
using namespace std;

#include "Jiyeon.h" //Jiyeon 헤더 파일 갖고 오기 위해 사용
#include "Money.h" //Money 헤더 파일 갖고 오기 위해 사용

void Money::returnmoney() {

	int change = nowmoney;

	cout << "□▶　　　　　　　　동전　반환　　　　　　　　◀□\n";
	thirdscreen();
	cout << "□　　　　１０００원짜리　동전 ： " << change / 1000 << "　　　\t□\n";
	cout << "□　　　　　５００원짜리　동전 ： " << (change % 1000) / 500 << "　　　\t□\n";
	cout << "□　　　　　１００원짜리　동전 ： " << ((change % 1000) % 500) / 100 << "　　　\t□\n";
	
}

void Money::salesmoney() {
	secondscreen();
	cout << "□▶　　　　자판기　판매　매출　보기　　　　　◀□\n";
	thirdscreen();
	cout << "□\t　　　총　매출액 ： " << totalsales + lastmoney - nowmoney << "원\t　　　\t□\n";
	secondscreen();
}