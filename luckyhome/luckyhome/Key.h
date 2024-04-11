#pragma once
#ifndef KEY_H
#define KEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include <vector>

class Key : public Thing {
private:
    int position;

public:
    Key();

    int calculateMoney(std::vector<Thing*>* category) override;
    Key* createNewItem() override;
    //void setPosition(int newPosition);
    bool isNear(int position1, int position2) override;
};

#endif // !KEY_H