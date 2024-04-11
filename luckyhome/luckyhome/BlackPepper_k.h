#pragma once
#ifndef BLACKPEPPER_K_H
#define BLACKPEPPER_K_H

#include "../luckyhome/Essence.h"

class BlackPepper_k : public Essence {
public:
    BlackPepper_k();
    int calculateMoney(int count) override;
    //bool Dodelete();//用来判断当前符号是否应该被删除
    BlackPepper_k* createNewItem() override;
};
//如果基类的虚函数返回类型是指针或引用类型，那么子类中重写该虚函数时，返回类型可以是基类返回类型的派生类型指针或引用。


#endif // BLACKPEPPER_K_H
