#include "../luckyhome/Cat.h"

Cat::Cat(){
    setPrice(3);
    setName("cat");
    setDescribe("��ֵ1ö��ң�������Χ��ţ�̣�ÿ����һ��ţ�̣����9ö���");

}

int Cat::calculateMoney(std::vector<Thing*>* category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if ((*category)[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            value += 9;
            delete (*category)[i];//�ͷ�ָ��
            (*category)[i] = new Empty(); // ����ţ��
        }
    }
    //����
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