#include <stdio.h>
#include "SkipList.h"

int Skip_list::CoinFlip() {
    int height = 0;
    while (rand() % 2 == 1 && height < MAX_HEIGHT){
        height++;
    }
    return height;
}

NODE* Skip_list::search(int k){
    NODE* a = nullptr;
    
    return a;
}
NODE* Skip_list::compare(NODE first, NODE second){
    NODE* a = nullptr;;
    
    return a;
}
NODE* Skip_list::insert(int k){
    NODE* a = nullptr;;
    
    return a;
}

