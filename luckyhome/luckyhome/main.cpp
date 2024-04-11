#include<iostream>
#include<string>
#include<vector>
#include<map>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Props.h"
#include "../luckyhome/Essence.h"
//�������
#include "../luckyhome/BlackPepper.h"
#include "../luckyhome/GreenPepper.h"
#include "../luckyhome/LockRemover.h"
#include"../luckyhome/MonkeyOlivander.h"
#include"../luckyhome/RainCloud.h"
//���뾫��
#include"../luckyhome/BlackPepper_k.h"
#include"../luckyhome/GreenPepper_k.h"
#include"../luckyhome/LockRemover_k.h"
#include"../luckyhome/MonkeyOlivander_k.h"
#include"../luckyhome/RainCloud_k.h"
//������Ʒ
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

//�������ɾ���洢����
#include"../luckyhome/PropsDelete.h"

//���뾫��ɾ���洢����
#include"../luckyhome/EssenceDelete.h"
#include"../luckyhome/thingTraversal.h"

using namespace std;

int main() {
	int playergold;//���Ŀǰ����
	int dayCount;//��Ϸ����
	int deleteCount;//Ŀǰ����ɾ���Ĵ���
	int refreshCount;//Ŀǰ����ˢ�µĴ���
	int essenceCount;//Ŀǰ��ҳ��еľ�����
	vector<Thing*>playerItem;//Ŀǰ��������е���Ʒ
	vector<Props*>playerScene;//Ŀǰ��������еĵ���
	vector<Essence*>playerEssence;//Ŀǰ��������еľ���
	vector<Thing*>initalizeItem;//��ʼ������Ʒ
	vector<Props*>initalizeScene;//��ʼ���ĵ���
	vector<Essence*>initalizeEssence;//��ʼ���ľ���
	vector<Thing*>deadItem;//�Ѿ�����������Ʒ
	vector<Props*>deadScene;//�Ѿ��������ĵ���
	vector<Essence*>deadEssence;//�Ѿ��������ľ���
	vector<Thing*>punchboardItem;//�ϻ����е���Ʒ
	vector<int>Rent;//�洢���ÿ��Ҫ���ɵķ���


	//��Ʒ��ʼ��
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

	//���߳�ʼ��
	initalizeScene.push_back(new BlackPepper());
	initalizeScene.push_back(new GreenPepper());
	initalizeScene.push_back(new LockRemover());
	initalizeScene.push_back(new MonkeyOlivander());
	initalizeScene.push_back(new RainCloud());

	//������ʼ��
	initalizeEssence.push_back(new BlackPepper_k());
	initalizeEssence.push_back(new GreenPepper_k());
	initalizeEssence.push_back(new LockRemover_k());
	//����������ɾ��������֪����ôŪ����ʱ������
	//initalizeEssence.push_back(new MonkeyOlivander_k());
	//initalizeEssence.push_back(new RainCloud_k());

	//�ϻ����е���Ʒ��ʼ��(һ��ʼ�����)
	punchboardItem.push_back(new Cat());
	punchboardItem.push_back(new Coin()); 
	punchboardItem.push_back(new Bee());
	punchboardItem.push_back(new Pearl());
	punchboardItem.push_back(new Flower());



	//ÿ��Ҫ���ɵķ���ĳ�ʼ��,�ܹ�12��
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
	


	//���������ܲ���
	//����ɾ���ʹ洢
	PropsDelete(&playerScene, &deadScene);
	//bug�������ں����������������������жϲ���


	//����ɾ���ʹ洢
	EssenceDelete(&playerEssence, &deadEssence);
	//bug::�����������������û���

	cout << initalizeEssence[0]->calculateMoney(1) << endl;
	cout << initalizeScene[0]->getName() << endl;
	cout << initalizeScene[1]->getName() << endl; 
	cout << "��ӭ�������˷�����";
	return 0;
}