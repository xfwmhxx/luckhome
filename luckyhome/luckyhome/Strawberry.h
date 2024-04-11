#pragma once
#ifndef STRAWBERRY_H
#define STRAWBERRY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Strawberry : public Thing {
private:
    int position;

public:
    Strawberry();

    int calculateMoney(std::vector<Thing*>* category) override;
    Strawberry* createNewItem() override;
    //void setPosition(int newPosition);
    //int getPosition();
    bool isNear(int position1, int position2) override;
};

#endif // STRAWBERRY_H