#include "../luckyhome/MonkeyOlivander_k.h"

MonkeyOlivander_k::MonkeyOlivander_k() {
    setName("���Ӱ�������");
    setPrice(2);
    setNumber(4);
    setDescribe("����㽶��Ҭ�ӻ���Ҭ�ӱ����������������������������󣬴���Ϸ�ĺ��Ӹ������2�����");
    setCounter(1);
    setAccumulator(0);
}



MonkeyOlivander_k* MonkeyOlivander_k::createNewItem() {
    return new MonkeyOlivander_k();
}