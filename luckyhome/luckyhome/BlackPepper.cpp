#include"../luckyhome/Props.h"
#include"../luckyhome/BlackPepper.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
 BlackPepper::BlackPepper(){
	setName("黑胡椒");
	setPrice(1);
	setNumber(1);
	setDescribe("每消除一个符号，给予1枚金币。");
	setCounter(-1);//代表当前道具是不删除就永远存在的
	setAccumulator(0);
};

 int BlackPepper::calculateMoney(int count) {
	 int value = count;
	 return value;
 }


 BlackPepper* BlackPepper::createNewItem() {
	 return new BlackPepper();
 }//返回新的实例