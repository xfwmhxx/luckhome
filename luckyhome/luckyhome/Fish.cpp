#include "../luckyhome/Fish.h"
#include "../luckyhome/Empty.h"

Fish::Fish() : Thing() {
    setPrice(3);
    setName("fish");
    setDescribe("��ֵ1ö��ң�������Χ�����ݣ�ÿ����һ�����ݣ����4ö���");
}

int Fish::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "bubble" && isNear(i, this->getPosition())) {
            value += 4;
            delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
        }
    }
    return value;
}

Fish* Fish::createNewItem() {
    return new Fish();
}

bool Fish::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Fish::setPosition(int newpposition) {
//    // �������λ��
//    position = newposition;
//}