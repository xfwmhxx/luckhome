#include "GreenPepper_k.h"
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
GreenPepper_k::GreenPepper_k() {
    setName("�ཷ");
    setPrice(1);
    setNumber(2);
    setDescribe("���������3����ͬ�ҷǿ�λ�ķ���, ����30ö��ҡ���֮����������");
    setCounter(1); // ����ǰ�����ǲ�ɾ������Զ���ڵ�
    setAccumulator(0);
}

int GreenPepper_k::calculateMoney(vector<Thing*>* category) {
	int value = 0;
	int cnt = 0;
	for (int i = 0; i < 19; i++) {
		cnt = 0;
		if ((*category)[i]->getName() == "empty") {
			continue;//����ǿ�λ������
		}
		for (int j = i + 1; j < 20; j++) {
			if ((*category)[i]->getName() == (*category)[j]->getName()) {
				cnt++;
			}
		}
		if (cnt >= 3) {
			value = 30;
			setAccumulator(1);
			break;
		}
	}
	return value;
}

/*bool GreenPepper_k::Dodelete() {
	if (this->Accumulator == this->counter) {
		return 1;
	}
	return 0;
}*/

GreenPepper_k* GreenPepper_k::createNewItem() {
    return new GreenPepper_k();
}//�����µ�ʵ�� 