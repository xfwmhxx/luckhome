#include "../luckyhome/Essence.h"
using namespace std;
Essence::Essence() :name(""), number(0), price(0), describe(""), counter(0), Accumulator(0), Died(0){}

Essence::Essence(string name, int number, int price, string describe, int counter, int Accumulator, bool Died)
	:name(name), number(number), price(price), describe(describe), counter(counter), Accumulator(Accumulator) ,Died(Died){}

string Essence::getName() {
	return name;
}
void Essence::setName(string name) {
	this->name = name;
}

int Essence::getNumber() {
	return number;
}
void Essence::setNumber(int number) {
	this->number = number;
}

int Essence::getPrice() {
	return price;
}
void Essence::setPrice(int price) {
	this->price = price;
}

string Essence::getDescribe() {
	return describe;
}
void Essence::setDescribe(string describe) {
	this->describe = describe;
}

int Essence::getCounter() {
	return counter;
};
void Essence::setCounter(int counter) {
	this->counter = counter;
};

int Essence::getAccumulator() {
	return Accumulator;
}
void Essence::setAccumulator(int Accumulator) {
	this->Accumulator = Accumulator;
}

bool Essence::Dodelete() {
	if (this->Accumulator == this->counter) {
		return 1;//输出1就代表这个符号可以被删除了
	}
	return 0;
}

bool Essence::getDied() {
	return Died;
}

void Essence::setDied(bool died) {
	this->Died = died;
}

//虚函数部分

int Essence::calculateMoney(int count) {
	return 0;
	//因为有的类用不到这个函数，所以默认返回0
}

int Essence::calculateMoney(vector<Thing*>* category) {
	return 0;
	//因为有的类用不到这个函数，所以默认返回0
}

Essence* Essence::createNewItem() {
	return new Essence();
}