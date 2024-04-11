#pragma once
#ifndef BEE_H
#define BEE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Bee : public Thing {
private:
    int position;
public:

    Bee();

    int calculateMoney(vector<Thing*> category) override;

    bool isNear(int position1, int position2) override;

    Bee* createNewItem() override;
    
    //void setPosition(int newposition) override;


};

#endif // !BEE_H