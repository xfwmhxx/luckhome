#pragma once
// LockRemover.h

#ifndef LOCKREMOVER_H
#define LOCKREMOVER_H

#include "../luckyhome/Props.h"
#include "../luckyhome/Thing.h"
#include"../luckyhome/Empty.h"
#include<vector>
#include <random>
#include <ctime>

class LockRemover : public Props {
public:
    LockRemover();

    int calculateMoney(vector<Thing*>category) override;

    LockRemover* createNewItem() override;
};

#endif