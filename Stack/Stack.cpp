#include "Stack.h"
#include <iostream>

Stack::Stack() 
    : arr{nullptr}, currentTop{-1}, capacity{10} {
    arr = new Node[10];
}

Stack::Stack(Node &n, int size) 
    :arr{nullptr}, currentTop{0}, capacity{size} {
    arr = new Node[size];
    arr[0] = n;
}

void Stack::push(Node &n) {
    if(currentTop == (capacity - 1)) {
        doubleCapacity();
    }
    currentTop++;
    arr[currentTop] = n;
}

void Stack::pop() {
    if(currentTop == -1) {
        std::cout << "No elements in the stack" << std::endl;
    } else {
        currentTop--;
    }
}

void Stack::displayStack() {
    for(int i{currentTop}; i >= 0; i--) {
        std::cout << (arr[i]).s << " is " << (arr[i]).a << std::endl;
    }
    std::cout << std::endl;
}

void Stack::doubleCapacity() {
    Node *temp = new Node[capacity * 2];
    for(int i{0}; i <= currentTop; i++) {
        *(temp + i) = *(arr + i);
    }
    delete [] arr;
    arr = temp;
    delete [] temp;
    capacity *= 2;
}

Stack::~Stack() {
    delete [] arr;
}