#include "../luckyhome/Pearl.h"

Pearl::Pearl() {
    setPrice(1);
    setName("pearl");
    setDescribe("��ֵ1ö���");
}

int Pearl::calculateMoney(vector<Thing*>category) {
    return 1;
}

Pearl* Pearl::createNewItem() {
    return new Pearl();
}