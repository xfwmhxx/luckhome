#include "../luckyhome/Key.h"

Key::Key() {
    setPrice(3);
    setName("key");
    setDescribe("价值1枚金币,可以消除相邻的财宝箱");
}

int Key::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "treasure" && isNear(i, position)) {
            value += 50;
            delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            break;
        }
        else if ((*category)[i]->getName() == "lockbox" && isNear(i, position)) {
            value += 15;
            delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            break;
        }
        else if ((*category)[i]->getName() == "hugetreasure" && isNear(i, position)) {
            value += 100;
            delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            break;
        }
        else if ((*category)[i]->getName() == "steelsafe" && isNear(i, this->getPosition())) {
            value += 30;
            delete (*category)[i];//释放指针
            (*category)[i] = new Empty();
            // OwnPosition 即这个元素自己的位置
            //int OP = (position.getRow() * 5) + position.getColumn();
            //category[OP] = new Empty();
            break;
        }
    }
    return price;
}

Key* Key::createNewItem() {
    return new Key();
}

//void Key::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Key::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}