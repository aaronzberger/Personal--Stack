#include "Stack.h"
#include <iostream>

Stack::Stack() 
    : arr{nullptr}, topIndex{-1}, capacity{10} {
    arr = new Node*[capacity];
}

Stack::Stack(Node &n, int size) 
    : arr{nullptr}, topIndex{0}, capacity{size} {
    arr = new Node*[capacity];
    Node *newNode = new Node(n);
    arr[0] = newNode;
}

void Stack::push(Node &n) {
    if(topIndex == (capacity - 1))
        doubleCapacity();
    topIndex++;
    Node *newNode = new Node(n);
    arr[topIndex] = newNode;
}

void Stack::pop() {
    if(topIndex == -1)
        throw std::runtime_error("Attempted to pop the stack when there are no elements currently in it. In pop() method");
    delete arr[topIndex];
    topIndex--;
}

void Stack::displayStack() {
    for(int i{topIndex}; i >= 0; i--)
        std::cout << (arr[i])->s << " is " << (arr[i])->a << std::endl;
    std::cout << std::endl;
}

void Stack::doubleCapacity() {
    capacity *= 2;
    Node **newArr = new Node*[capacity];
    for(int i{0}; i <= topIndex; i++)
        newArr[i] = arr[i];
    delete [] arr;
    arr = newArr;
}

Stack::~Stack() {
    for(int i{0}; i <= topIndex; i++)
        delete arr[i];
    delete [] arr;
}