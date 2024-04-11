#pragma once
#ifndef EMPTY_H
#define EMPTY_H
#include <iostream>
#include <string>
#include "../luckyhome/Empty.h"
#include "../luckyhome/Thing.h"
#include <vector>

class Empty : public Thing {
public:
    Empty();

    int calculateMoney(std::vector<Thing*> category) override;

    Empty* createNewItem() override;

};

#endif // !EMPTY_H
