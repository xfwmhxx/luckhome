#include "../luckyhome/MonkeyOlivander_k.h"

MonkeyOlivander_k::MonkeyOlivander_k() {
    setName("猴子奥利凡德");
    setPrice(2);
    setNumber(4);
    setDescribe("如果香蕉，椰子或半个椰子被猴子消除，则消除自身。被消除后，此游戏的猴子给予额外2倍金币");
    setCounter(1);
    setAccumulator(0);
}



MonkeyOlivander_k* MonkeyOlivander_k::createNewItem() {
    return new MonkeyOlivander_k();
}