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
    //bool Dodelete();//�����жϵ�ǰ�����Ƿ�Ӧ�ñ�ɾ��
    RainCloud_k* createNewItem() override;
};

#endif // RAINCLOUD_K_H