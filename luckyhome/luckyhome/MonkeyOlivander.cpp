#include"../luckyhome/MonkeyOlivander.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ�ʹ�Ǽ���Ʒ��ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
MonkeyOlivander:: MonkeyOlivander(){

	setName("���Ӱ�������");
	setPrice(2);
	setNumber(4);
	setDescribe("�����ܸ������2����� ��");
	setCounter(-1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
	setAccumulator(0);
	
};



MonkeyOlivander* MonkeyOlivander::createNewItem() {
	return new MonkeyOlivander();
}