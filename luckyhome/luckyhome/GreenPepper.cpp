#include"../luckyhome/Props.h"
#include"../luckyhome/GreenPepper.h"
#include"../luckyhome/Thing.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
GreenPepper::GreenPepper(){
	setName("灰胡椒");
	setPrice(1);
	setNumber(2);
	setDescribe("如果有至少3个相同且非空位的符号，则在每次旋转之后给予3枚金币。");
	setCounter(-1);//代表当前道具是不删除就永远存在的
	setAccumulator(0);
};

int GreenPepper::calculateMoney(vector<Thing*>category) {
	int value = 0;
	int cnt = 0;
	for (int i = 0; i < 19; i++) {
		cnt = 0;
		if (category[i]->getName() == "empty") {
			continue;//如果是空位就跳过
		}
		for (int j = i + 1; j < 20; j++) {
			if (category[i]->getName() == category[j]->getName()) {
				cnt++;
			}
		}
		if (cnt >= 3) {
			value = 3;
			break;
		}
	}
	return value;
};

GreenPepper* GreenPepper::createNewItem() {
	return new GreenPepper();
};