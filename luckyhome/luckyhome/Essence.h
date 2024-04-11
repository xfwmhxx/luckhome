#pragma once
#ifndef ESSENCE_H_
#define ESSENCE_H_
#include<map>
#include<string>
#include<iostream>
#include"../luckyhome/Thing.h"
#include<vector>
using namespace std;
//关于精华的类
class Thing;
class Essence {
protected:
	string name;
	int number;
	int price;
	string describe;
	int counter;
	int Accumulator;
	bool Died;
public:
	//virtual void funct() = 0;//虚函数，因为每一个道具的功能不一样。希望子类能重新定义。即便子类不定义也不会报错（别乱加const）
	Essence();
	Essence(string name, int number, int price, string describe, int counter, int Accumulator, bool Died);

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

	bool Dodelete();//用来判断当前符号是否应该被删除
	bool getDied();
	void setDied(bool died);


	virtual int calculateMoney(int count);
	// 物品的成员函数实现
	virtual int calculateMoney(vector<Thing*>* category);

	virtual Essence* createNewItem();
};

#endif
