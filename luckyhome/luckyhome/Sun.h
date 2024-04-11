#pragma once
#ifndef SUN_H
#define SUN_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Flower.h"
#include <vector>

class Sun : public Thing {
private:
    int position;

public:
    Sun();

    int calculateMoney(std::vector<Thing*>* category) override;
    Sun* createNewItem() override;
    //void setPosition(int newPosition);
    bool isNear(int position1, int position2) override;
};

#endif // SUN_H