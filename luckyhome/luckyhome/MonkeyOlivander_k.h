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
    //bool Dodelete();//�����жϵ�ǰ�����Ƿ�Ӧ�ñ�ɾ��
    MonkeyOlivander_k* createNewItem() override;
};

#endif // MONKEYOLIVANDER_K_H