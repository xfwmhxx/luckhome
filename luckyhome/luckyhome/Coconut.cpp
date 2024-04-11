#include "../luckyhome/Coconut.h"

Coconut::Coconut() {
    setPrice(1);
    setName("coconut");
    setDescribe("价值2金币,被消除后给予10金币");
}

int Coconut::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerItem) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "monkey" && isNear(i, this->getPosition())) {
            value += 9;
            (*category)[position] = new Halfcoconut(); // 添加半个椰子
            (*playerItem).push_back(new Halfcoconut());
        }
    }
    return value;
}

bool Coconut::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Coconut::setPosition(int newposition) {
//
//    position = newposition;
//}

Coconut* Coconut::createNewItem() {
    return new Coconut();
}