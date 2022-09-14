#include <iostream>
using namespace std;

#include "Jiyeon.h" //Jiyeon 헤더 파일 갖고 오기 위해 사용

void Jiyeon::firstscreen() {
	cout << "□□□□□□□□□□□□□□□□□□□□□□□□□\n▷▷▷▷▷▷　지연이의　음료　자판기　◁◁◁◁◁◁\n□□□□□□□□□□□□□□□□□□□□□□□□□\n";
}

void Jiyeon::secondscreen() {
	cout << "□□□□□□□□□□□□□□□□□□□□□□□□□\n";
}

void Jiyeon::thirdscreen() {
	cout << "□―――――――――――――――――――――――□\n";
}

void Jiyeon::fourthscreen() {
	cout << "　▶돈이　부족합니다\n";
}

void Jiyeon::errorscreen() {
	cout << "※ 　　Ｅｒｒｏｒ　잘못된　키를　눌렀습니다　　 ※\n";
}
void Jiyeon::resetscreen() {
	cout << "※　　　　　　시스템을　초기화했습니다　　　　　※\n";
}

void Jiyeon::menukey() {
	cout << "□　　　　　　메뉴　키　(Ｋｅｙ)　안내　　　　　□\n□〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓□\n";
	cout << "□　　１００ ： １００원짜리　동전　투입　　　　□\n□　　５００ ： ５００원짜리　동전　투입　　　　□\n□　１０００ ： １０００원짜리　지폐　투입　　　□\n";
	cout << "□　　　　０ ： 돈　다　투입했을　때　누르기　　□\n";
	cout << "□□□□□□□□□□□□□□□□□□□□□□□□□\n";
	cout << "□　　　　　　　　돈을　넣으세요　　　　　　　　□\n";
}

void Jiyeon::choicemenu1() {
	cout << "□　　　　　　　메뉴를　　고르세요　　　　　　　□\n";
}

void Jiyeon::choicemenu2() {
	cout << "□　8 번  ：  메뉴　다　고름　　　　　　　　　　□\n";
}

void Jiyeon::choicemenu3() {
	cout << "□　　　　 　　ｍ(Ｍ) ： 동전　반환 　　　　　　□\n";
	cout << "□ ｎ(Ｎ) ： 동전　반환 Ｘ　프로그램　계속　사용□\n";
}

void Jiyeon::choicemenu4() { 
	cout << "□　　　ｙ(Ｙ) ： 자판기　판매　매출　보기　　　□\n";
	cout << "□　　　　ｗ(Ｗ) ： 자판기　판매　초기화　　　　□\n";
}

void Jiyeon::choicemenu5() {
	cout << "□　　　　 　ｘ(Ｘ) ： 프로그램　종료　　 　　　□\n";
}
