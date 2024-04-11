#pragma once
#ifndef LOCKREMOVER_K_H
#define LOCKREMOVER_K_H
#include "../luckyhome/Essence.h"
#include"../luckyhome/Thing.h"
#include"../luckyhome/Empty.h"
#include<vector>


class LockRemover_k : public Essence {
public:
    LockRemover_k();
    int calculateMoney(vector<Thing*>* category) override;
    //bool Dodelete();//用来判断当前符号是否应该被删除
    LockRemover_k* createNewItem() override;
};

#endif // LOCKREMOVER_K_H