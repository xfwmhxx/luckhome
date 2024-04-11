#pragma once
#ifndef GOOSE_H
#define GOOSE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Goldegg.h"
#include <vector>

class Goose : public Thing {
public:
    Goose();
    int calculateMoney(vector<Thing*>* category) override;
    Goose* createNewItem() override;


};

#endif // ! GOOSE_H