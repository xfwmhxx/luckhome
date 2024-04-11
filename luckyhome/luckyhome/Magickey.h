#pragma once
#ifndef MAGICKEY_H
#define MAGICKEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Magickey : public Thing {
private:
    int position;

public:
    Magickey();

    int calculateMoney(std::vector<Thing*>* category ) override;
    Magickey* createNewItem() override;
    //void setPosition(int newPosition);
    bool isNear(int position1, int position2) override;
};

#endif // !MAGICKEY_H