#include "../luckyhome/LockRemover_k.h"

LockRemover_k::LockRemover_k() {
    setName("开锁器");
    setPrice(3);
    setNumber(3);
    setDescribe("在3个带锁箱，保险箱，宝箱和巨大宝箱被消除后，消除自身。带锁箱，保险箱，宝箱和巨大宝箱由100%的几率被消除。");
    setCounter(3); // 代表当前道具满足条件3次就删除
    setAccumulator(0);
}

int LockRemover_k::calculateMoney(vector<Thing*>* category) {
    int value = 0;
    for (int i = 0; i < 20; i++) {

        //宝箱
        if ((*category)[i]->getName() == "Treasure") {
             
             if (getAccumulator() < 3) {
                value += 50;
                delete (*category)[i];//释放指针
                (*category)[i] = new Empty();//指向空字符
                setAccumulator(getAccumulator() + 1);
             }
             
        }

        //锁盒
        if ((*category)[i]->getName() == "Lockbox") {
            
            if (getAccumulator() < 3) {
                value += 15;
                delete (*category)[i];//释放指针
                (*category)[i] = new Empty();//指向空字符
                setAccumulator(getAccumulator() + 1);
            }
        }

        //保险箱
        if ((*category)[i]->getName() == "Steelsafe") {

            
            if (getAccumulator() < 3) {
                value += 30;
                delete (*category)[i];//释放指针
                (*category)[i] = new Empty();//指向空字符
                setAccumulator(getAccumulator() + 1);
            }
        }

        //巨大宝箱
        if ((*category)[i]->getName() == "hugetreasure") {
            
            if (getAccumulator() < 3) {
                value += 100;
                delete (*category)[i];//释放指针
                (*category)[i] = new Empty();//指向空字符
                setAccumulator(getAccumulator() + 1);
            }
        }
    }
    return value;
}

/*bool LockRemover_k::Dodelete() {
    if (this->Accumulator == this->counter) {
        return 1;
    }
    return 0;
}*/

LockRemover_k* LockRemover_k::createNewItem() {
    return new LockRemover_k();
}