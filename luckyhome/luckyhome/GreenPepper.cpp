#include"../luckyhome/Props.h"
#include"../luckyhome/GreenPepper.h"
#include"../luckyhome/Thing.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
GreenPepper::GreenPepper(){
	setName("�Һ���");
	setPrice(1);
	setNumber(2);
	setDescribe("���������3����ͬ�ҷǿ�λ�ķ��ţ�����ÿ����ת֮�����3ö��ҡ�");
	setCounter(-1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
	setAccumulator(0);
};

int GreenPepper::calculateMoney(vector<Thing*>category) {
	int value = 0;
	int cnt = 0;
	for (int i = 0; i < 19; i++) {
		cnt = 0;
		if (category[i]->getName() == "empty") {
			continue;//����ǿ�λ������
		}
		for (int j = i + 1; j < 20; j++) {
			if (category[i]->getName() == category[j]->getName()) {
				cnt++;
			}
		}
		if (cnt >= 3) {
			value = 3;
			break;
		}
	}
	return value;
};

GreenPepper* GreenPepper::createNewItem() {
	return new GreenPepper();
};