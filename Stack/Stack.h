#ifndef _STACK_H_
#define _STACK_H_
#include <vector>
#include "Node.h"

class Stack {
private:
    Node **arr;
    int topIndex;
    int capacity;
    void doubleCapacity();
public:
    Stack();
    Stack(Node &n, int size = 10);
    ~Stack();
    
    void push(Node &n);
    void pop();
    
    void displayStack();
    
    int getTopIndex() { return topIndex; }
    int getCapacity() { return capacity; }
};

#endif // _STACK_H_
