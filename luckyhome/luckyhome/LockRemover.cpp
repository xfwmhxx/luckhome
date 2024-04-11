#include"../luckyhome/Props.h"
#include"../luckyhome/LockRemover.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
LockRemover:: LockRemover()  {
	setName("������");
	setPrice(3);
	setNumber(3);
	setDescribe("�����䣬�����䣬����;޴�����35%�ļ��ʱ�������");
	setCounter(-1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
	setAccumulator(0);
};

int LockRemover::calculateMoney(vector<Thing*>category) {
    int value = 0;
    for (int i = 0; i < 20; i++) {
        
        //����
        if (category[i]->getName() == "Treasure") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 50;
                delete category[i];//�ͷ�ָ��
                category[i] = new Empty();//ָ����ַ�

            }
        }
        
        //����
        if (category[i]->getName() == "Lockbox") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 15;
                delete category[i];//�ͷ�ָ��
                category[i] = new Empty();//ָ����ַ�

            }
        }

        //������
        if (category[i]->getName() == "Steelsafe") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 30;
                delete category[i];//�ͷ�ָ��
                category[i] = new Empty();//ָ����ַ�

            }
        }

        //�޴���
        if (category[i]->getName() == "hugetreasure") {
            // ʹ�õ�ǰʱ����Ϊ����
            std::time_t seed = std::time(nullptr);

            // ���������������
            std::mt19937 gen(seed);

            // ����һ�����ȷֲ��������ֲ�������Χ�� [minx, maxx]
            int minx = 1;
            int maxx = 100;
            std::uniform_int_distribution<int> dist(minx, maxx);
            //���������
            int randomNum = dist(gen);
            if (randomNum <= 35) {
                value += 100;
                delete category[i];//�ͷ�ָ��
                category[i] = new Empty();//ָ����ַ�

            }
        }
    }
    return value;
}

LockRemover* LockRemover::createNewItem() {
	return new LockRemover();
}