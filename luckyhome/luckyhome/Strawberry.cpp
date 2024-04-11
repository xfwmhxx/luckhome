#include "../luckyhome/Strawberry.h"

Strawberry::Strawberry() {
    setPrice(2);
    setName("strawberry");
    setDescribe("��ֵ3ö��ң������Χ��������ݮ��ÿ��1����ݮ����3ö���");
}

int Strawberry::calculateMoney(std::vector<Thing*>* category) {
    int value = 3;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "strawberry" && isNear(i, this->getPosition()) &&
            (*category)[i]->getPosition() != position) { 
            value += 3;
        }
    }
    return value;
}

Strawberry* Strawberry::createNewItem() {
    return new Strawberry();
}

//void Strawberry::setPosition(int newPosition) {
//    position = newPosition;
//}

/*int Strawberry::getPosition() {
    return position;
}*/

bool Strawberry::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}