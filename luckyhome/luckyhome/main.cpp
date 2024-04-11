#include<iostream>
#include<string>
#include<vector>
#include<map>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Props.h"
#include "../luckyhome/Essence.h"
//导入道具
#include "../luckyhome/BlackPepper.h"
#include "../luckyhome/GreenPepper.h"
#include "../luckyhome/LockRemover.h"
#include"../luckyhome/MonkeyOlivander.h"
#include"../luckyhome/RainCloud.h"
//导入精华
#include"../luckyhome/BlackPepper_k.h"
#include"../luckyhome/GreenPepper_k.h"
#include"../luckyhome/LockRemover_k.h"
#include"../luckyhome/MonkeyOlivander_k.h"
#include"../luckyhome/RainCloud_k.h"
//导入物品
#include"../luckyhome/Bee.h"
#include"../luckyhome/Bubble.h"
#include"../luckyhome/Cat.h"
#include"../luckyhome/Coconut.h"
#include"../luckyhome/Coin.h"
#include"../luckyhome/Cow.h"
#include"../luckyhome/Empty.h"
#include"../luckyhome/Fish.h"
#include"../luckyhome/Flower.h"
#include"../luckyhome/Goldegg.h"
#include"../luckyhome/Goose.h"
#include"../luckyhome/Halfcoconut.h"
#include"../luckyhome/Hugetreasure.h"
#include"../luckyhome/Key.h"
#include"../luckyhome/Lockbox.h"
#include"../luckyhome/Magickey.h"
#include"../luckyhome/Milk.h"
#include"../luckyhome/Monkey.h"
#include"../luckyhome/Pearl.h"
#include"../luckyhome/Rain.h"
#include"../luckyhome/Steelsafe.h"
#include"../luckyhome/Strawberry.h"
#include"../luckyhome/Sun.h"
#include"../luckyhome/Treasure.h"

//导入道具删除存储函数
#include"../luckyhome/PropsDelete.h"

//导入精华删除存储函数
#include"../luckyhome/EssenceDelete.h"
#include"../luckyhome/thingTraversal.h"

using namespace std;

int main() {
	int playergold;//玩家目前经济
	int dayCount;//游戏天数
	int deleteCount;//目前可以删除的次数
	int refreshCount;//目前可以刷新的次数
	int essenceCount;//目前玩家持有的精华币
	vector<Thing*>playerItem;//目前玩家所持有的物品
	vector<Props*>playerScene;//目前玩家所持有的道具
	vector<Essence*>playerEssence;//目前玩家所持有的精华
	vector<Thing*>initalizeItem;//初始化的物品
	vector<Props*>initalizeScene;//初始化的道具
	vector<Essence*>initalizeEssence;//初始化的精华
	vector<Thing*>deadItem;//已经消除过的物品
	vector<Props*>deadScene;//已经消除过的道具
	vector<Essence*>deadEssence;//已经消除过的精华
	vector<Thing*>punchboardItem;//老虎机中的物品
	vector<int>Rent;//存储玩家每关要缴纳的房租


	//物品初始化
	initalizeItem.push_back(new Bee());
	initalizeItem.push_back(new Bubble());
	initalizeItem.push_back(new Cat());
	initalizeItem.push_back(new Coconut());
	initalizeItem.push_back(new Coin());
	initalizeItem.push_back(new Cow()); 
	initalizeItem.push_back(new Empty());
	initalizeItem.push_back(new Fish());
	initalizeItem.push_back(new Flower());
	initalizeItem.push_back(new Goldegg());
	initalizeItem.push_back(new Goose());
	initalizeItem.push_back(new Halfcoconut());
	initalizeItem.push_back(new Hugetreasure());
	initalizeItem.push_back(new Key());
	initalizeItem.push_back(new Lockbox());
	initalizeItem.push_back(new Magickey());
	initalizeItem.push_back(new Milk());
	initalizeItem.push_back(new Monkey());
	initalizeItem.push_back(new Pearl());
	initalizeItem.push_back(new Rain());
	initalizeItem.push_back(new Steelsafe());
	initalizeItem.push_back(new Strawberry());
	initalizeItem.push_back(new Sun());
	initalizeItem.push_back(new Treasure());

	//道具初始化
	initalizeScene.push_back(new BlackPepper());
	initalizeScene.push_back(new GreenPepper());
	initalizeScene.push_back(new LockRemover());
	initalizeScene.push_back(new MonkeyOlivander());
	initalizeScene.push_back(new RainCloud());

	//精华初始化
	initalizeEssence.push_back(new BlackPepper_k());
	initalizeEssence.push_back(new GreenPepper_k());
	initalizeEssence.push_back(new LockRemover_k());
	//以下两个的删除函数不知道怎么弄。暂时不加入
	//initalizeEssence.push_back(new MonkeyOlivander_k());
	//initalizeEssence.push_back(new RainCloud_k());

	//老虎机中的物品初始化(一开始有五个)
	punchboardItem.push_back(new Cat());
	punchboardItem.push_back(new Coin()); 
	punchboardItem.push_back(new Bee());
	punchboardItem.push_back(new Pearl());
	punchboardItem.push_back(new Flower());



	//每关要缴纳的房租的初始化,总共12关
	Rent.push_back(25);
	Rent.push_back(50);
	Rent.push_back(100);
	Rent.push_back(150);
	Rent.push_back(225);
	Rent.push_back(275);
	Rent.push_back(375);
	Rent.push_back(450);
	Rent.push_back(575);
	Rent.push_back(650);
	Rent.push_back(700);
	Rent.push_back(777);
	


	//函数主功能部分
	//道具删除和存储
	PropsDelete(&playerScene, &deadScene);
	//bug：：对于猴子这个道具用这个函数还判断不了


	//精华删除和存储
	EssenceDelete(&playerEssence, &deadEssence);
	//bug::最后两个精华的问题没解决

	cout << initalizeEssence[0]->calculateMoney(1) << endl;
	cout << initalizeScene[0]->getName() << endl;
	cout << initalizeScene[1]->getName() << endl; 
	cout << "欢迎来到幸运房东！";
	return 0;
}