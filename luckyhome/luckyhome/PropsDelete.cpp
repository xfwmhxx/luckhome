#include"../luckyhome/PropsDelete.h"
using namespace std;
void PropsDelete(vector<Props*>* props,  vector<Props*>* Have_delete) {
	size_t length = (*props).size();
	//����������
	for (size_t i = 0; i < length; i++) {
		if ((*props)[i]->getAccumulator() == (*props)[i]->getCounter()) {
			//�������ɾ��Ҫ��
			//ɾ��ָ��λ�õ�Ԫ��
			(*Have_delete).push_back((*props)[i]);//���뵽ɾ���˵ĵ�������
			(*props).erase((*props).begin() + i);  // ɾ��
			length = (*props).size();//���¼��㳤��
		}
	}
}