#pragma once
#ifndef _GREEN_PEPPER_H
#define _GREEN_PEPPER_H

#include "Props.h"
#include"../luckyhome/Thing.h"
#include<string>
#include<vector>


class GreenPepper : public Props {
public:
    GreenPepper();

    int calculateMoney(vector<Thing*>category) override;
    GreenPepper* createNewItem() override;
};

#endif // GREY_PEPPER_H