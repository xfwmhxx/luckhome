#include "../luckyhome/Milk.h"

Milk::Milk() {
    setPrice(1);
    setName("milk");
    setDescribe("¼ÛÖµ1Ã¶½ð±Ò");
}

int Milk::calculateMoney(vector<Thing*> category) {
    return 1;
}

Milk* Milk::createNewItem() {
    return new Milk();
}