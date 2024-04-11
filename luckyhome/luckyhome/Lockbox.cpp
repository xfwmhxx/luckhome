#include "../luckyhome/Lockbox.h"

Lockbox::Lockbox() {
    setPrice(1);
    setName("lockbox");
    setDescribe("价值15枚金币,可以被钥匙消除");
}

int Lockbox::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Lockbox* Lockbox::createNewItem() {
    return new Lockbox();
}