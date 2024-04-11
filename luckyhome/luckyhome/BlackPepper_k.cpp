#include "../luckyhome/BlackPepper_k.h"

BlackPepper_k::BlackPepper_k() {
    setName("黑胡椒");
    setPrice(1);
    setNumber(1);
    setDescribe("每消除一个符号，给予10枚金币。在之后消除自身。");
    setCounter(1); // 代表当前道具是不删除就永远存在的
    setAccumulator(0);
}

int BlackPepper_k::calculateMoney(int count) {
    int value = count * 10;
    setAccumulator(1);
    return value;
}

/*bool BlackPepper_k::Dodelete() {
    if (this->Accumulator == this->counter) {
        return 1;//输出1就代表这个符号可以被删除了
    }
    return 0;
}*/

BlackPepper_k* BlackPepper_k::createNewItem() {
    return new BlackPepper_k();
}//返回新的实例 