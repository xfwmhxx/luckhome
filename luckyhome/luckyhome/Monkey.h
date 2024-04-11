#ifndef MONKEY_H
#define MONKEY_H

#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include"../luckyhome/Essence.h"
#include "../luckyhome/Coconut.h"
#include "../luckyhome/Halfcoconut.h"
//#include"../luckyhome/Props.h"
#include <vector>

class Monkey : public Thing {
private:
    int position;

public:
    Monkey();

    int calculateMoney(std::vector<Thing*>* category, std::vector<Props*>* playerScene, std::vector<Thing*>* playerItem, std::vector<Essence*>* playerEssence) override;
    Monkey* createNewItem() override;
    //void setPosition(int newPosition);
    bool isNear(int position1, int position2) override;
};

#endif // MONKEY_H
