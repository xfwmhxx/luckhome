#include "../luckyhome/Steelsafe.h"

Steelsafe::Steelsafe() {
    setPrice(1);
    setName("steelsafe");
    setDescribe("��ֵ30ö���,���Ա�Կ������");
}

int Steelsafe::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Steelsafe* Steelsafe::createNewItem() {
    return new Steelsafe();
}