#ifndef MONEY_H
#define MONEY_H
#include "Jiyeon.h" //Jiyeon 헤더 파일 갖고 오기 위해 사용

class Money : public Jiyeon { // 클래스 Jiyeon 상속받는 클래스 Money
	int nowmoney = 0; //현재 가진 금액
	int lastmoney = 0; //처음에 넣은 금액
	int totalsales = 0; //최종 매출 금액
public:

	Money() {} //생성자
	~Money() {} //소멸자
	int getmoney() { return nowmoney; } //nowmoney 리턴하기 위한 함수
	void inmoney(int mymoney) { nowmoney = nowmoney + mymoney; } //투입 중인 돈을 저장하기 위한 함수
	void outmoney(int mymoney) { nowmoney = nowmoney - mymoney; } //투입한 돈에서 빠져나간 돈을 저장하기 위한 함수
	void savemoney() { lastmoney = nowmoney; } //처음에 넣은 금액 저장하기 위한 함수
	void totalsalesmoney() { totalsales = totalsales + lastmoney - nowmoney; } //최종 매출 금액을 저장하기 위한 함수
	void zeromoney() { nowmoney = 0; } //현재 가진 돈을 0으로 만들기 위한 함수
	void totalmoney() { cout << "□　\t　　당신의　현재　금액 ： " << nowmoney << "　　　\t□\n"; }
	void totalmoney2() { cout << "□　\t　　당신의　현재　금액 ： " << nowmoney << "　　　\t□\n"; }
	void returnmoney(); //동전 반환을 위한 함수
	void salesmoney(); //판매 매출을 보기 위한 함수
};

#endif