#include "../luckyhome/Milk.h"

Milk::Milk() {
    setPrice(1);
    setName("milk");
    setDescribe("��ֵ1ö���");
}

int Milk::calculateMoney(vector<Thing*> category) {
    return 1;
}

Milk* Milk::createNewItem() {
    return new Milk();
}