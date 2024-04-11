#include "../luckyhome/Bubble.h"

Bubble::Bubble() {
    setPrice(1);
    setName("bubble");
    setDescribe("��ֵ2ö���");
    setCounter(3);
    setCounter_now(0);
}

int Bubble::calculateMoney(std::vector<Thing*>* category, int counter, int counter_now) {
    int value = 2;
    counter_now += 1;
    if (counter_now == counter) {
        for (int i = 0; i < 20; i++) {
            if ((*category)[i]->getName() == "bubble") {
                value += 9;
                delete (*category)[i];//�ͷ�ָ��
                (*category)[i] = new Empty(); // ��������
            }
        }
    }
    return value;
}

Bubble* Bubble::createNewItem() {
    return new Bubble();
}