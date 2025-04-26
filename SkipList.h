#ifndef SkipList_h
#define SkipList_h

#include <iostream>
#include "NODE.h"

using namespace std;
const int MAX_HEIGHT = 5;

class Skip_list {
private:
    
    int CoinFlip();
    NODE* search(int k);
    NODE* compare(NODE first, NODE second);
    
public:
    NODE* insert(int k);
    
};



#endif /* SkipList_h */
