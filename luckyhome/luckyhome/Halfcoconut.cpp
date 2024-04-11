#include "../luckyhome/Halfcoconut.h"

Halfcoconut::Halfcoconut() : Thing() {
    setPrice(1);
    setName("halfCoconut");
    setDescribe("��ֵ1ö���,�����������4���");
}

int Halfcoconut::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            value += 9;
            delete (*category)[position];//�ͷ�ָ��
            (*category)[position] = new Empty(); // ��������
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
//    // ��ȡλ�õ��߼�ʵ��
//    // ����λ��ֵ
//    position = newposition;
//}