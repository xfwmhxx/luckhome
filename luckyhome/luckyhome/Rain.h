#pragma once
#ifndef RAIN_H
#define RAIN_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Flower.h"

#include <vector>

class Rain : public Thing {
private:
    int position;

public:
    Rain();

    int calculateMoney(std::vector<Thing*>* category) override;
    Rain* createNewItem() override;
    //void setPosition(int newPosition);
    bool isNear(int position1, int position2) override;
};

#endif // RAIN_H