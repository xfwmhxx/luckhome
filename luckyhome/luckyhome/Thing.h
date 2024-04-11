#pragma once
#ifndef THING_H_
#define THING_H_
#include<map>
#include<string>
#include<iostream>
#include<vector>
#include"../luckyhome/Essence.h"
#include"../luckyhome/Props.h"
using namespace std;
class Essence;
class Props;


//������Ʒ����
class Thing {

protected:
	string name;//��Ʒ������
	int value;//��Ʒ�ļ�ֵ
	int price;//��Ʒ�����ȼ�
	int number;//��Ʒ�ı��
	string describe;//��Ʒ������
	int counter;//��ʱ��
	int counter_now = 0;//��ǰ��ʱ��
	int Accumulator;//������
	int Accumulator_now = 0;//��ǰ������
	int positions;

public:

	Thing();
	virtual ~Thing();
	string getName();
	void setName(string name);

	int getValue();
	void setValue(int value);

	int getPrice();
	void setPrice(int price);

	int getNumber();
	void setNumber(int number);

	string getDescribe();
	void setDescribe(string describe);

	int getCounter();
	void setCounter(int counter);

	int getCounter_now();
	void setCounter_now(int counterr_now);

	int getAccumulator();
	void setAccumulator(int Accumulator);

	int getPosition();
	void setPosition(int position);
	

	//��һ�����ຯ��
	virtual int calculateMoney(vector<Thing*> category);
	//��һ������
	virtual int calculateMoney(vector<Thing*>* category);
	//�ڶ�������
	virtual int calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem);
	//������	����
	virtual int calculateMoney(std::vector<Thing*>* category, std::vector<Props*>* playerScene, std::vector<Thing*>* playerItem, std::vector<Essence*>* playerEssence);
	//����������
	virtual int calculateMoney(std::vector<Thing*>* category, int counter, int counter_now);

	//�ڶ������ຯ��
	virtual bool isNear(int position1, int position2);

	//���������ຯ��
	virtual Thing* createNewItem();

	//���������ຯ��
	//��һ������


};


#endif