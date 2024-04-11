#include "../luckyhome/Treasure.h"

Treasure::Treasure() {
    setPrice(1);
    setName("treasure");
    setDescribe("价值50枚金币,可以被钥匙消除");
}

int Treasure::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Treasure* Treasure::createNewItem() {
    return new Treasure();
}