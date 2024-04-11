#include"../luckyhome/RainCloud.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不使那件物品消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
RainCloud:: RainCloud(){
	setName("雨云");
	setPrice(2);
	setNumber(5);
	setDescribe("雨给予额外1枚金币。雨属于普通符号，而非非凡符号。");
	setCounter(-1);//代表当前道具是不删除就永远存在的
	setAccumulator(0);
};

int RainCloud::calculateMoney(vector<Thing*>category) {
	int value = 0;//
	for (int i = 0; i < 20; i++) {
		if (category[i]->getName() == "rain") {
			value++;
		}
	}

	return value;
}

RainCloud* RainCloud::createNewItem() {
	return new RainCloud();
}