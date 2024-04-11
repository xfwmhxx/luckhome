#include "../luckyhome/Thing.h"
using namespace std;

Thing::Thing() :name(""), number(0), price(0), describe(""), counter(0), Accumulator(0), positions(0) {}
Thing::~Thing() {}

string Thing::getName() {
	return name;
}
void Thing::setName(string name) {
	this->name = name;
}

int Thing::getValue() {
	return value;
}
void Thing::setValue(int value) {
	this->value = value;
}

int Thing::getNumber() {
	return number;
}
void Thing::setNumber(int number) {
	this->number = number;
}

int Thing::getPrice() {
	return price;
}
void Thing::setPrice(int price) {
	this->price = price;
}

string Thing::getDescribe() {
	return describe;
}
void Thing::setDescribe(string describe) {
	this->describe = describe;
}

int Thing::getCounter() {
	return counter;
};
void Thing::setCounter(int counter) {
	this->counter = counter;
};

int Thing::getCounter_now() {
	return counter_now;
}
void Thing::setCounter_now(int conuter_now) {
	this->counter_now = counter_now;
}

int Thing::getAccumulator() {
	return Accumulator;
};
void Thing::setAccumulator(int Accumulator) {
	this->Accumulator = Accumulator;
};

int Thing::getPosition() {
	return positions;
};
void Thing::setPosition(int position) {
	this->positions = position;
};

//第一种子类函数
//类型1
int Thing::calculateMoney(vector<Thing*>category) {
	return 0;
}
//类型2
int Thing::calculateMoney(vector<Thing*>* category) {
	return 0;
}
//类型3
int Thing::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem) {
	return 0;
}
//类型4
int Thing::calculateMoney(std::vector<Thing*>* category, std::vector<Props*>* playerScene, std::vector<Thing*>* playerItem, std::vector<Essence*>* playerEssence) {
	return 0;
}
//类型5
int Thing::calculateMoney(std::vector<Thing*>* category, int counter, int counter_now) {
	return 0;
}


//第二种子类函数
bool Thing::isNear(int position1, int position2) {
	return 0;//默认返回0代表不相邻
}

Thing* Thing::createNewItem() {
	return new Thing();
}