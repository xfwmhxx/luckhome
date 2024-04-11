#pragma once
#ifndef PROPS_H_
#define PROPS_H_
#include<map>
#include<string>
#include<iostream>
#include<vector>
#include"../luckyhome/Thing.h"
using namespace std;
//关于道具的类
class Thing;
class Props {
protected:
	string name;		//道具的名字
	int number;
	int price;			//道具的优先级
	string describe;	//道具的描述
	int counter;		//计数器
	int Accumulator;	//累加器
public:
	//virtual void funct() = 0;//虚函数，因为每一个道具的功能不一样。希望子类能重新定义。即便子类不定义也不会报错（别乱加const）
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