#include"../luckyhome/EssenceDelete.h"
using namespace std;
void EssenceDelete(vector<Essence*>* essence, vector<Essence*>* Have_delete) {
	size_t length = (*essence).size();
	//遍历道具组
	for (size_t i = 0; i < length; i++) {
		if ((*essence)[i]->Dodelete()) {
			//代表能删除
			(*Have_delete).push_back((*essence)[i]);//加入到删除了的道具组里
			(*essence).erase((*essence).begin() + i);  // 删除
			length = (*essence).size();//重新计算长度
		}
	}
}