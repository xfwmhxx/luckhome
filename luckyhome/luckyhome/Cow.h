#pragma once
#ifndef COW_H
#define COW_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>
#include <random>

class Cow : public Thing {
public:
    Cow();
    int calculateMoney(vector<Thing*> category) override;
    Cow* createNewItem() override;

};

#endif // !COW_H
