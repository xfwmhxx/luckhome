#include "../luckyhome/Treasure.h"

Treasure::Treasure() {
    setPrice(1);
    setName("treasure");
    setDescribe("��ֵ50ö���,���Ա�Կ������");
}

int Treasure::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Treasure* Treasure::createNewItem() {
    return new Treasure();
}