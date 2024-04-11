#include "../luckyhome/Bee.h"

Bee::Bee(){
    setPrice(2);
    setName("bee");
    setDescribe("��ֵ1ö��ң������Χ�л���ÿ�仨����1ö���");
}

int Bee::calculateMoney(std::vector<Thing*> category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "flower" && isNear(i, this->getPosition())) {
            value += 1;
        }
    }
    return value;
}

bool Bee::isNear(int position1, int position2) {//position1Ϊ����Ʒ��λ��, position2Ϊ���ж�λ��
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Bee::setPosition(int newposition) {
//    position = newposition;
//}

Bee* Bee::createNewItem() {
    return new Bee();
}