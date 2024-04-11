#pragma once
#ifndef RAINCLOUD_K_H
#define RAINCLOUD_K_H
#include "../luckyhome/Essence.h"
#include"../luckyhome/Thing.h"
#include<vector>


class RainCloud_k : public Essence {
public:
    RainCloud_k();
    //int calculateMoney(vector<Thing*>category);
    //bool Dodelete();//用来判断当前符号是否应该被删除
    RainCloud_k* createNewItem() override;
};

#endif // RAINCLOUD_K_H