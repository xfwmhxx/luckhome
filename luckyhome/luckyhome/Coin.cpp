#include "../luckyhome/Coin.h"

Coin::Coin() {
    setPrice(1);
    setName("coin");
    setDescribe("¼ÛÖµ1Ã¶½ð±Ò");
}

int Coin::calculateMoney(vector<Thing*> category) {
    return 1;
}

Coin* Coin::createNewItem() {
    return new Coin();
}