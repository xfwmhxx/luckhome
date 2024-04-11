#include "../luckyhome/Goose.h"

Goose::Goose() {
    setPrice(4);
    setName("goose");
    setDescribe("��ֵ3���,����ϻ���������пո�,��1%�������ӽ�");
}

int Goose::calculateMoney(vector<Thing*>* category) {
    int cntEmpty = -1;
    int pos[20];
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "empty") {
            cntEmpty++;
            pos[cntEmpty] = i;
        }
    }
    //���ӽ�
    if (cntEmpty != -1) {
        // �����ж�
        srand(time(nullptr));
        int random = rand() % 100;
        if (random == 2) {
            if (cntEmpty == 0) {
                (*category)[pos[0]] = new Goldegg();
            }
            else {
                int rnd = rand() % (cntEmpty + 1);
                (*category)[pos[rnd]] = new Goldegg();
            }
        }
    }
    return 3;
}

Goose* Goose::createNewItem() {
    return new Goose();
}