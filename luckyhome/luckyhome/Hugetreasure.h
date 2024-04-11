#pragma once
#ifndef HUGETREASURE_H
#define HUGETREASURE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Hugetreasure : public Thing {
public:
    Hugetreasure();
    int calculateMoney(vector<Thing*>* category) override;
    Hugetreasure* createNewItem() override;


};

#endif // !HUGETREASURE_H