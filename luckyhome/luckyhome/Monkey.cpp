#include "../luckyhome/Monkey.h"

Monkey::Monkey() {
    setPrice(3);
    setName("monkey");
    setDescribe("��ֵ2ö���,����ϻ���������пո�,�����������ڵ�Ҭ�ӣ����ɰ��Ҭ�ӣ��Ͱ��Ҭ��");
}

int Monkey::calculateMoney(std::vector<Thing*>* category, std::vector<Props*>* playerScene, std::vector<Thing*>* playerItem, std::vector<Essence*>* playerEssence) {//�����ֵ
    int value = 2;
    int Length = playerEssence->size();
    for (int i = 0; i < 20; i++) {
        if (isNear(i, this->getPosition())) {
            if ((*category)[i]->getName() == "coconut") {
                for (int j = 0; j < Length; j++) {
                    if ((*playerEssence)[j]->getName() == "���Ӱ�������") {
                        if ((*playerEssence)[j]->getDied() == 0) {
                            (*playerEssence)[j]->setDied(1);
                        }
                    }
                }
                value += 10;
                (*category)[i] = new Halfcoconut();
                (*playerItem).push_back(new Halfcoconut());
            }
            else if ((*category)[i]->getName() == "halfcoconut") {
                for (int j = 0; j < Length; j++) {
                    if ((*playerEssence)[j]->getName() == "���Ӱ�������") {
                        if ((*playerEssence)[j]->getDied() == 0) {
                            (*playerEssence)[j]->setDied(1);
                        }
                    }
                }
                value += 4;
                delete (*category)[i];//�ͷ�ָ��
                (*category)[i] = new Empty();
            }
        }
    }
    for (int i = 0; i < (*playerScene).size(); i++) {
        if ((*playerScene)[i]->getName() == "���Ӱ�������") {
            value *= 2;
        }
    }

    for (int j = 0; j < Length; j++) {
        if ((*playerEssence)[j]->getName() == "���Ӱ�������") {
            if ((*playerEssence)[j]->getDied() == 1) {
                value *= 2;
            }
        }
    }
    return value;
}

Monkey* Monkey::createNewItem() {
    return new Monkey();
}

//void Monkey::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Monkey::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}