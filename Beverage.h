#ifndef BEVERAGE_H
#define BEVERAGE_H
#include "Money.h" //Money ��� ���� ���� ���� ���� ���

class Beverage : public Money { // Ŭ���� Money ��ӹ޴� Ŭ���� Beverage
private:
	const char *Name[7] = { "��ī�ݶ�", "���̴�", "������", "��Ÿ500", "����ֽ�", "�����꽺", "���ڿ���" };
	const int Cost[7] = { 700, 700, 1000, 600, 800, 700, 600 };
	int Quantity[7] = { 7, 6, 5, 7, 5, 6, 4 };
public:
	
	void addbeverage(int i); //�ʱ��� ����� ȭ�� ����ϴ� �Լ�
	void choicebeverage(int menu); //����� �����ϸ� ������ ����� ������ �ϳ��� ���� �Լ�
	void zerobeverage(int i); //����� ������ 0���� ����� �Լ�
	void resetbeverage(); //����� ������ �ʱ� ���·� �ǵ����� �Լ�
};

#endif