#include "../luckyhome/RainCloud_k.h"

RainCloud_k::RainCloud_k() {
    setName("雨云");
    setPrice(2);
    setNumber(5);
    setDescribe("如果雨和花相邻，则消除自身。被消除后，此游戏中的雨和花给予额外1枚金币");
    setCounter(1);
    setAccumulator(0);
}



RainCloud_k* RainCloud_k::createNewItem() {
    return new RainCloud_k();
}