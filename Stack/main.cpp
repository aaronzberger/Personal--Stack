#include <iostream>
#include "Stack.h"
#include "Node.h"

using std::cout;
using std::endl;

void displayStackInfo(Stack &stack);

int main() {
    cout << "=================================" << endl;
    
    Node aaron;
    aaron.s = "aaron";
    aaron.a = 17;
    
//    Node *arr = new Node[10];
//    cout << sizeof(*arr[]);
//    
    Stack stack{aaron, 3};
    
    displayStackInfo(stack);
    
    Node jonah;
    jonah.s = "jonah";
    jonah.a = 21;
    
    stack.push(jonah);
    
    Node gabby;
    gabby.s = "gabby";
    gabby.a = 14;
    
    Node mom;
    mom.s = "mom";
    mom.a = 40;
    
    stack.push(gabby);
    stack.push(mom);
    
    displayStackInfo(stack);

    stack.pop();
    
    displayStackInfo(stack);
    
    cout << "=================================" << endl;
    return 0;
}

void displayStackInfo(Stack &stack) {
    cout << "Stack Information:" << endl;
    cout << "Top Index: " << stack.getCurrentTop() << endl;
    cout << "Capacity: " << stack.getCapacity() << endl;
    stack.displayStack();
}