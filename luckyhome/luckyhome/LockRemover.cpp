#include"../luckyhome/Props.h"
#include"../luckyhome/LockRemover.h"
using namespace std;
/*
优先级 1 只能能产生金币或者被消除的
优先级 2 能使其他物品增值但是不消失的
优先级 3 能消除其他物品的
优先级 4 能产生物品的*/
LockRemover:: LockRemover()  {
	setName("开锁器");
	setPrice(3);
	setNumber(3);
	setDescribe("带锁箱，保险箱，宝箱和巨大宝箱有35%的几率被消除。");
	setCounter(-1);//代表当前道具是不删除就永远存在的
	setAccumulator(0);
};

int LockRemover::calculateMoney(vector<Thing*>category) {
    int value = 0;
    for (int i = 0; i < 20; i++) {
        
        //宝箱
        if (category[i]->getName() == "Treasure") {
            // 使用当前时间作为种子
            std::time_t seed = std::time(nullptr);

            // 创建随机数生成器
            std::mt19937 gen(seed);

            // 创建一个均匀分布的整数分布器，范围是 [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //生成随机数
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 50;
                delete category[i];//释放指针
                category[i] = new Empty();//指向空字符

            }
        }
        
        //锁盒
        if (category[i]->getName() == "Lockbox") {
            // 使用当前时间作为种子
            std::time_t seed = std::time(nullptr);

            // 创建随机数生成器
            std::mt19937 gen(seed);

            // 创建一个均匀分布的整数分布器，范围是 [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //生成随机数
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 15;
                delete category[i];//释放指针
                category[i] = new Empty();//指向空字符

            }
        }

        //保险箱
        if (category[i]->getName() == "Steelsafe") {
            // 使用当前时间作为种子
            std::time_t seed = std::time(nullptr);

            // 创建随机数生成器
            std::mt19937 gen(seed);

            // 创建一个均匀分布的整数分布器，范围是 [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //生成随机数
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 30;
                delete category[i];//释放指针
                category[i] = new Empty();//指向空字符

            }
        }

        //巨大宝箱
        if (category[i]->getName() == "hugetreasure") {
            // 使用当前时间作为种子
            std::time_t seed = std::time(nullptr);

            // 创建随机数生成器
            std::mt19937 gen(seed);

            // 创建一个均匀分布的整数分布器，范围是 [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //生成随机数
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 100;
                delete category[i];//释放指针
                category[i] = new Empty();//指向空字符

            }
        }
    }
    return value;
}

LockRemover* LockRemover::createNewItem() {
	return new LockRemover();
}