#ifndef MONEY_H
#define MONEY_H
#include "Jiyeon.h" //Jiyeon ��� ���� ���� ���� ���� ���

class Money : public Jiyeon { // Ŭ���� Jiyeon ��ӹ޴� Ŭ���� Money
	int nowmoney = 0; //���� ���� �ݾ�
	int lastmoney = 0; //ó���� ���� �ݾ�
	int totalsales = 0; //���� ���� �ݾ�
public:

	Money() {} //������
	~Money() {} //�Ҹ���
	int getmoney() { return nowmoney; } //nowmoney �����ϱ� ���� �Լ�
	void inmoney(int mymoney) { nowmoney = nowmoney + mymoney; } //���� ���� ���� �����ϱ� ���� �Լ�
	void outmoney(int mymoney) { nowmoney = nowmoney - mymoney; } //������ ������ �������� ���� �����ϱ� ���� �Լ�
	void savemoney() { lastmoney = nowmoney; } //ó���� ���� �ݾ� �����ϱ� ���� �Լ�
	void totalsalesmoney() { totalsales = totalsales + lastmoney - nowmoney; } //���� ���� �ݾ��� �����ϱ� ���� �Լ�
	void zeromoney() { nowmoney = 0; } //���� ���� ���� 0���� ����� ���� �Լ�
	void totalmoney() { cout << "�ࡡ\t��������ǡ����硡�ݾ� �� " << nowmoney << "������\t��\n"; }
	void totalmoney2() { cout << "�ࡡ\t��������ǡ����硡�ݾ� �� " << nowmoney << "������\t��\n"; }
	void returnmoney(); //���� ��ȯ�� ���� �Լ�
	void salesmoney(); //�Ǹ� ������ ���� ���� �Լ�
};

#endif