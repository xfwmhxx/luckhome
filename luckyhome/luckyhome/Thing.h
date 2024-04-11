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


//关于物品的类
class Thing {

protected:
	string name;//物品的名称
	int value;//物品的价值
	int price;//物品的优先级
	int number;//物品的编号
	string describe;//物品的描述
	int counter;//计时器
	int counter_now = 0;//当前计时器
	int Accumulator;//计数器
	int Accumulator_now = 0;//当前计数器
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
	

	//第一种子类函数
	virtual int calculateMoney(vector<Thing*> category);
	//第一种类型
	virtual int calculateMoney(vector<Thing*>* category);
	//第二种类型
	virtual int calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem);
	//第三种	类型
	virtual int calculateMoney(std::vector<Thing*>* category, std::vector<Props*>* playerScene, std::vector<Thing*>* playerItem, std::vector<Essence*>* playerEssence);
	//第四种类型
	virtual int calculateMoney(std::vector<Thing*>* category, int counter, int counter_now);

	//第二种子类函数
	virtual bool isNear(int position1, int position2);

	//第三种子类函数
	virtual Thing* createNewItem();

	//第四种子类函数
	//第一种类型


};


#endif