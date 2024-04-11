#pragma once
#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Empty.h"
#include"../luckyhome/Milk.h"
//#include"../luckyhome/Position.h"
#include <vector>

class Cat : public Thing {
private:
    int position;
public:
    Cat();
    int calculateMoney(std::vector<Thing*>* category) override;
    Cat* createNewItem() override;
    bool isNear(int position1, int position2) override;
    //void setPosition(int newposition);



};

#endif // !CAT_H