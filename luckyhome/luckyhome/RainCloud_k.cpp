#include "../luckyhome/RainCloud_k.h"

RainCloud_k::RainCloud_k() {
    setName("����");
    setPrice(2);
    setNumber(5);
    setDescribe("�����ͻ����ڣ������������������󣬴���Ϸ�е���ͻ��������1ö���");
    setCounter(1);
    setAccumulator(0);
}



RainCloud_k* RainCloud_k::createNewItem() {
    return new RainCloud_k();
}