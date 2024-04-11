#include "../luckyhome/thingTraversal.h"

void thingTraversal(vector<Thing*>* initalizeItem, vector<Thing*>* playerItem, int dailyMoney)
{
	size_t length = (*playerItem).size();

	if (length < 20)
	{
		while (length >= 20)
		{
			(*playerItem).push_back((*initalizeItem)[7]);
		}
	}
	for (int i = 1; i <= 4; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			dailyMoney += ((*playerItem)[j] -> calculateMoney((* playerItem)));
			/*((*playerItem)[j]->calculateMoney((*playerItem)));*/
			dailyMoney += ((*playerItem)[j]->calculateMoney(playerItem));

		}
	}
}