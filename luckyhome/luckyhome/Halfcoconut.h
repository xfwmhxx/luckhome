#pragma once
#ifndef HALFCOCONUT_H
#define HALFCOCONUT_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Halfcoconut : public Thing {
private:
    int position;
public:
    Halfcoconut();
    int calculateMoney(vector<Thing*>* category) override;
    Halfcoconut* createNewItem() override;
    bool isNear(int position1, int position2) override;
    //void setPosition(int newposition);
};

#endif // ! HALFCOCONUT
