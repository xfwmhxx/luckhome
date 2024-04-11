#pragma once
#ifndef MONKEYOLIVANDER_K_H
#define MONKEYOLIVANDER_K_H
#include "../luckyhome/Essence.h"
#include"../luckyhome/Thing.h"
#include<vector>

class MonkeyOlivander_k : public Essence {
public:
    MonkeyOlivander_k();
    //int calculateMoney(vector<Thing*>category);
    //bool Dodelete();//用来判断当前符号是否应该被删除
    MonkeyOlivander_k* createNewItem() override;
};

#endif // MONKEYOLIVANDER_K_H