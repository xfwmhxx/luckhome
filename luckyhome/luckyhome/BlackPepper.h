#pragma once
#ifndef BLACKPEPPER_H
#define BLACKPEPPER_H

#include <string>
#include <vector>
#include "../luckyhome/Props.h"
#include "../luckyhome/Thing.h"
using namespace std;


// �ں�����
class BlackPepper : public Props {
public:
    BlackPepper();

    int calculateMoney(int count) override;
    BlackPepper* createNewItem() override;

    // ������Ա�����ͳ�Ա����...
};

#endif // BLACKPEPPER_H