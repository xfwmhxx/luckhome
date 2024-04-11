#include "../luckyhome/Empty.h"
#include <vector>

Empty::Empty() {
    setPrice(1);
    setName("empty");
    setDescribe("");
}

int Empty::calculateMoney(std::vector<Thing*> category) {
    return 0;
}

Empty* Empty::createNewItem() {
    return new Empty();
}