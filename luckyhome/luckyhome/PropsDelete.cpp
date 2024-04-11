#include"../luckyhome/PropsDelete.h"
using namespace std;
void PropsDelete(vector<Props*>* props,  vector<Props*>* Have_delete) {
	size_t length = (*props).size();
	//遍历道具组
	for (size_t i = 0; i < length; i++) {
		if ((*props)[i]->getAccumulator() == (*props)[i]->getCounter()) {
			//如果满足删除要求
			//删除指定位置的元素
			(*Have_delete).push_back((*props)[i]);//加入到删除了的道具组里
			(*props).erase((*props).begin() + i);  // 删除
			length = (*props).size();//重新计算长度
		}
	}
}