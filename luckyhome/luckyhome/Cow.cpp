#include "../luckyhome/Cow.h"
#include "Milk.h"

Cow::Cow() : Thing() {
    setName("cow");
    setDescribe("价值3枚金币，如果老虎机面板上有空格，有15%概率增加牛奶");
    setPrice(4);
}

int Cow::calculateMoney(vector<Thing*> itemCategory) {
    int cntEmpty = -1;
    int pos[20];
    for (int i = 0; i < 20; i++) {
        if (itemCategory[i]->getName() == "empty") {
            cntEmpty++;
            pos[cntEmpty] = i;
        }
    }
    if (cntEmpty != -1) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 99);
        int random = dis(gen);
        if (random < 15) {
            if (cntEmpty == 0) {
                itemCategory[pos[0]] = new Milk();
            }
            else {
                uniform_int_distribution<> dis2(0, cntEmpty);
                int rnd = dis2(gen);
                itemCategory[pos[rnd]] = new Milk();
            }
        }
    }
    return 3;
}

Cow* Cow::createNewItem() {
    return new Cow();
}