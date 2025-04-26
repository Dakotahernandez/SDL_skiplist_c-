#ifndef NODE_h
#define NODE_h

struct NODE{
    bool NEG_INF, POS_INF;
    int key;
    NODE* UP, *DOWN, *PREV, *NEXT;
    NODE(){};
    NODE(int key):key(key){};

};
#endif /* NODE_h */
