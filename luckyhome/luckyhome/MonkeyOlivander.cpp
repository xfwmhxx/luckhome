#include"../luckyhome/MonkeyOlivander.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不使那件物品消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
MonkeyOlivander:: MonkeyOlivander(){

	setName("猴子奥利凡德");
	setPrice(2);
	setNumber(4);
	setDescribe("猴子能给予额外2倍金币 。");
	setCounter(-1);//代表当前道具是不删除就永远存在的
	setAccumulator(0);
	
};



MonkeyOlivander* MonkeyOlivander::createNewItem() {
	return new MonkeyOlivander();
}