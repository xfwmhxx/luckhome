#include "../luckyhome/Magickey.h"

Magickey::Magickey() {
    setPrice(3);
    setName("Magickey");
    setDescribe("��ֵ1ö���,�����������ڵĲƱ���");
}

int Magickey::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "treasure" && isNear(i, this->getPosition())) {
            value += 150;
            delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
        if ((*category)[i]->getName() == "lockbox" && isNear(i, this->getPosition())) {
            value += 45;
            delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
        if ((*category)[i]->getName() == "hugetreasure" && isNear(i, this->getPosition())) {
            value += 300;
            delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
        if ((*category)[i]->getName() == "steelsafe" && isNear(i, this->getPosition())) {
            value += 90;
            delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty();
            // OwnPosition �����Ԫ���Լ���λ��
            /*int OP = (position.getRow() * 5) + position.getColumn();
            category[OP] = new Empty();*/
            break;
        }
    }
    return value;
}

Magickey* Magickey::createNewItem() {
    return new Magickey();
}

//void Magickey::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Magickey::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}