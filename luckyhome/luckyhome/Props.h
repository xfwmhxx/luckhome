#pragma once
#ifndef PROPS_H_
#define PROPS_H_
#include<map>
#include<string>
#include<iostream>
#include<vector>
#include"../luckyhome/Thing.h"
using namespace std;
//���ڵ��ߵ���
class Thing;
class Props {
protected:
	string name;		//���ߵ�����
	int number;
	int price;			//���ߵ����ȼ�
	string describe;	//���ߵ�����
	int counter;		//������
	int Accumulator;	//�ۼ���
public:
	//virtual void funct() = 0;//�麯������Ϊÿһ�����ߵĹ��ܲ�һ����ϣ�����������¶��塣�������಻����Ҳ���ᱨ�����Ҽ�const��
	Props();
	Props(string name, int number, int price, string describe, int counter, int Accumulator);

	string getName();
	void setName(string name);

	int getNumber();
	void setNumber(int number);

	int getPrice();
	void setPrice(int price);

	string getDescribe();
	void setDescribe(string describe);

	int getCounter();
	void setCounter(int counter);

	int getAccumulator();
	void setAccumulator(int Accumulator);


	virtual int calculateMoney(int count);
	virtual int calculateMoney(vector<Thing*>category);
	virtual Props* createNewItem();
};

#endif