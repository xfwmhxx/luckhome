#include"../luckyhome/Props.h"
#include"../luckyhome/BlackPepper.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
 BlackPepper::BlackPepper(){
	setName("�ں���");
	setPrice(1);
	setNumber(1);
	setDescribe("ÿ����һ�����ţ�����1ö��ҡ�");
	setCounter(-1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
	setAccumulator(0);
};

 int BlackPepper::calculateMoney(int count) {
	 int value = count;
	 return value;
 }


 BlackPepper* BlackPepper::createNewItem() {
	 return new BlackPepper();
 }//�����µ�ʵ��