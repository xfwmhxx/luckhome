#include"../luckyhome/RainCloud.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ�ʹ�Ǽ���Ʒ��ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
RainCloud:: RainCloud(){
	setName("����");
	setPrice(2);
	setNumber(5);
	setDescribe("��������1ö��ҡ���������ͨ���ţ����ǷǷ����š�");
	setCounter(-1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
	setAccumulator(0);
};

int RainCloud::calculateMoney(vector<Thing*>category) {
	int value = 0;//
	for (int i = 0; i < 20; i++) {
		if (category[i]->getName() == "rain") {
			value++;
		}
	}

	return value;
}

RainCloud* RainCloud::createNewItem() {
	return new RainCloud();
}