#include "../luckyhome/Cat.h"

Cat::Cat(){
    setPrice(3);
    setName("cat");
    setDescribe("价值1枚金币，消除周围的牛奶，每消除一个牛奶，获得9枚金币");

}

int Cat::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            value += 9;
            delete (*category)[i];//释放指针
            (*category)[i] = new Empty(); // 消除牛奶
        }
    }
    //测试
    cout << "1";
    return value;
}

Cat* Cat::createNewItem() {
    return new Cat();
}

bool Cat::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}

//void Cat::setPosition(int newposition) {
//    position = newposition;
//}