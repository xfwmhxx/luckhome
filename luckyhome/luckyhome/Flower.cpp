#include "../luckyhome/Flower.h"

Flower::Flower() {
    setPrice(1);
    setName("flower");
    setDescribe("¼ÛÖµ1Ã¶½ð±Ò");
}

int Flower::calculateMoney(vector<Thing*> category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if (isNear(i, this->getPosition())) {
            if (category[i]->getName() == "bee")
                value *= 2;
            if (category[i]->getName() == "rain")
                value *= 2;
        }
    }
    return value;
}

Flower* Flower::createNewItem() {
    return new Flower();
}

bool Flower::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}