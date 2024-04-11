#pragma once
#ifndef FLOWER_H
#define FLOWER_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Flower : public Thing {
private:
    int position;
public:
    Flower();
    int calculateMoney(vector<Thing*> category) override;
    Flower* createNewItem() override;
    bool isNear(int position1, int position2) override;


};

#endif // ! FLOWER_H
