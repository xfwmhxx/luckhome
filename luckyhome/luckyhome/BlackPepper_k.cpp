#include "../luckyhome/BlackPepper_k.h"

BlackPepper_k::BlackPepper_k() {
    setName("�ں���");
    setPrice(1);
    setNumber(1);
    setDescribe("ÿ����һ�����ţ�����10ö��ҡ���֮����������");
    setCounter(1); // ����ǰ�����ǲ�ɾ������Զ���ڵ�
    setAccumulator(0);
}

int BlackPepper_k::calculateMoney(int count) {
    int value = count * 10;
    setAccumulator(1);
    return value;
}

/*bool BlackPepper_k::Dodelete() {
    if (this->Accumulator == this->counter) {
        return 1;//���1�ʹ���������ſ��Ա�ɾ����
    }
    return 0;
}*/

BlackPepper_k* BlackPepper_k::createNewItem() {
    return new BlackPepper_k();
}//�����µ�ʵ�� 