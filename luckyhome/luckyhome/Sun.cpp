#include "../luckyhome/Sun.h"

Sun::Sun() {
    setPrice(1);
    setName("sun");
    setDescribe("��ֵ4ö��ң������Χ�л���ÿ�仨����4ö���");
}

int Sun::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "flower" && isNear(i, this->getPosition())) {
            value += 4;
        }
    }
    return value;
}

Sun* Sun::createNewItem() {
    return new Sun();
}

//void Sun::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Sun::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}