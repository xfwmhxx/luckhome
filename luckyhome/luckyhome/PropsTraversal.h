#pragma once
#ifndef PROPSTRAGVERSAL_H
#define PROPSTRAGVERSAL_H
#include<iostream>
#include<vector>
#include<string>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Props.h"
#include "../luckyhome/Essence.h"
//Ìí¼ÓµÀ¾ß
#include "../luckyhome/BlackPepper.h"
#include "../luckyhome/GreenPepper.h"
#include "../luckyhome/LockRemover.h"
#include"../luckyhome/MonkeyOlivander.h"
#include"../luckyhome/RainCloud.h"
using namespace std;
void PropsTraversal(vector<Props*>* initalizeItem, vector<Props*>* playerItem, int dailyMoney, int dailycount);

#endif