#include "../luckyhome/Props.h"
using namespace std;
Props::Props() : name(""), number(0), price(0), describe(""), counter(0), Accumulator(0) {}

Props::Props(string name, int number, int price, string describe, int counter, int Accumulator)
	:name(name), number(number), price(price), describe(describe), counter(counter), Accumulator(Accumulator){}

string Props::getName() {
	return name;
}
void Props::setName(string name) {
	this->name = name;
}

int Props::getNumber() {
	return number;
}
void Props::setNumber(int number) {
	this->number = number;
}

int Props::getPrice() {
	return price;
}
void Props::setPrice(int price) {
	this->price = price;
}

string Props::getDescribe() {
	return describe;
}
void Props::setDescribe(string describe) {
	this->describe = describe;
}

int Props::getCounter() {
	return counter;
};
void Props::setCounter(int counter) {
	this->counter = counter;
};

int Props::getAccumulator() {
	return Accumulator;
}
void Props::setAccumulator(int Accumulator) {
	this->Accumulator = Accumulator;
}

//Ðéº¯Êý²¿·Ö
int Props::calculateMoney(int count) {
	return 0;

}
int Props::calculateMoney(vector<Thing*>category) {
	return 0;
}
Props* Props::createNewItem() {
	return new Props();

}