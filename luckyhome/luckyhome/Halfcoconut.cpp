#include "../luckyhome/Halfcoconut.h"

Halfcoconut::Halfcoconut() : Thing() {
    setPrice(1);
    setName("halfCoconut");
    setDescribe("价值1枚金币,被消除后给予4金币");
}

int Halfcoconut::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            value += 9;
            delete (*category)[position];//释放指针
            (*category)[position] = new Empty(); // 消除自身
        }
    }
    return value;
}

Halfcoconut* Halfcoconut::createNewItem() {
    return new Halfcoconut();
}

bool Halfcoconut::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Halfcoconut::setPosition(int newposition) {
//    // 获取位置的逻辑实现
//    // 返回位置值
//    position = newposition;
//}