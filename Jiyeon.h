#ifndef JIYEON_H
#define JIYEON_H

class Jiyeon { //Jiyeon 클래스 구현
public:
	Jiyeon() {} //생성자
	~Jiyeon() {} //소멸자
	void firstscreen(); //첫 번째 화면 출력 함수
	void secondscreen(); //두 번째 화면 출력 함수
	void thirdscreen(); //세 번째 화면 출력 함수
	void fourthscreen(); //네 번째 화면 출력 함수
	void errorscreen(); //에러 화면 출력 함수
	void resetscreen(); //시스템 초기화 화면 출력 함수
	void menukey(); //메뉴 화면 출력 함수
	void choicemenu1(); //메뉴 1 화면 출력 함수
	void choicemenu2(); //메뉴 2 화면 출력 함수
	void choicemenu3(); //메뉴 3 화면 출력 함수
	void choicemenu4(); //메뉴 4 화면 출력 함수
	void choicemenu5(); //메뉴 5 화면 출력 함수
};

#endif