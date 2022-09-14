#ifndef BEVERAGE_H
#define BEVERAGE_H
#include "Money.h" //Money 헤더 파일 갖고 오기 위해 사용

class Beverage : public Money { // 클래스 Money 상속받는 클래스 Beverage
private:
	const char *Name[7] = { "코카콜라", "사이다", "코코팜", "비타500", "사과주스", "포도쥬스", "초코우유" };
	const int Cost[7] = { 700, 700, 1000, 600, 800, 700, 600 };
	int Quantity[7] = { 7, 6, 5, 7, 5, 6, 4 };
public:
	
	void addbeverage(int i); //초기의 음료수 화면 출력하는 함수
	void choicebeverage(int menu); //음료수 선택하면 선택한 음료수 개수를 하나씩 빼는 함수
	void zerobeverage(int i); //음료수 개수를 0으로 만드는 함수
	void resetbeverage(); //음료수 개수를 초기 상태로 되돌리는 함수
};

#endif