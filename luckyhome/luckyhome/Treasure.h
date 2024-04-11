#pragma once
#ifndef TREAEURE_H
#define TREAEURE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Treasure : public Thing {
public:
    Treasure();
    int calculateMoney(vector<Thing*>* category) override;
    Treasure* createNewItem() override;

};

#endif // !TREAEURE_H