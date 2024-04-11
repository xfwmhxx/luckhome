#include "../luckyhome/Rain.h"

Rain::Rain() {
    setPrice(2);
    setName("rain");
    setDescribe("价值1枚金币，如果周围有花，每朵花增加2倍金币");
}

int Rain::calculateMoney(std::vector<Thing*>* category) {
    //int value = 2;
    //for (int i = 0; i < 20; i++) {
    //    if ((*category)[i]->getName() == "flower" && isNear(i, this->getPosition())) {
    //        value += 2;
    //    }
    //}
    //return value;
    return 2;
}

Rain* Rain::createNewItem() {
    return new Rain();
}

//void Rain::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Rain::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}