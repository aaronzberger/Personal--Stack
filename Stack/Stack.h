#ifndef _STACK_H_
#define _STACK_H_
#include <vector>
#include "Node.h"

class Stack
{
private:
    Node *arr;
    int currentTop;
    int capacity;
    void doubleCapacity();
public:
    Stack();
    Stack(Node &n, int size = 10);
    
    void push(Node &n);
    void pop();
    
    void displayStack();
    int getCurrentTop() { return currentTop; }
    int getCapacity() { return capacity; }
    ~Stack();

};

#endif // _STACK_H_
