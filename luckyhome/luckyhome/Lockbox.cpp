#include "../luckyhome/Lockbox.h"

Lockbox::Lockbox() {
    setPrice(1);
    setName("lockbox");
    setDescribe("��ֵ15ö���,���Ա�Կ������");
}

int Lockbox::calculateMoney(vector<Thing*>* category) {
    return 1;
}

Lockbox* Lockbox::createNewItem() {
    return new Lockbox();
}