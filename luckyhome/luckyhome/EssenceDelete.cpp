#include"../luckyhome/EssenceDelete.h"
using namespace std;
void EssenceDelete(vector<Essence*>* essence, vector<Essence*>* Have_delete) {
	size_t length = (*essence).size();
	//����������
	for (size_t i = 0; i < length; i++) {
		if ((*essence)[i]->Dodelete()) {
			//������ɾ��
			(*Have_delete).push_back((*essence)[i]);//���뵽ɾ���˵ĵ�������
			(*essence).erase((*essence).begin() + i);  // ɾ��
			length = (*essence).size();//���¼��㳤��
		}
	}
}