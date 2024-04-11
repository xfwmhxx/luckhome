#pragma once
#ifndef FISH_H
#define FISH_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Fish : public Thing {
private:
    int position;
public:
    Fish();
    int calculateMoney(vector<Thing*>* category) override;
    Fish* createNewItem() override;
    bool isNear(int position, int fishPosition) override;
    //void setPosition(int newposition);

};


#endif // ! FISH_H