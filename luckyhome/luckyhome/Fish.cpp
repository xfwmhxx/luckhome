#include "../luckyhome/Fish.h"
#include "../luckyhome/Empty.h"

Fish::Fish() : Thing() {
    setPrice(3);
    setName("fish");
    setDescribe("价值1枚金币，消除周围的泡泡，每消除一个泡泡，获得4枚金币");
}

int Fish::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "bubble" && isNear(i, this->getPosition())) {
            value += 4;
            delete (*category)[i];//释放指针
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
//    // 返回鱼的位置
//    position = newposition;
//}