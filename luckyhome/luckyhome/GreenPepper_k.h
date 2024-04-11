#pragma once
#ifndef GREENPEPPER_K_H
#define GREENPEPPER_K_H
#include "../luckyhome/Essence.h"
#include"../luckyhome/Thing.h"
#include<vector>

class GreenPepper_k : public Essence {
public:
    GreenPepper_k();
    int calculateMoney(vector<Thing*>* category) override;
    //bool Dodelete();//用来判断当前符号是否应该被删除
    GreenPepper_k* createNewItem() override;
};

#endif 