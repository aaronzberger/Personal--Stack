#include <iostream>
#include "Stack.h"
#include "Node.h"

using std::cout;
using std::endl;

void displayStackInfo(Stack &stack);

int main() {
    cout << "=================================" << endl;
    
    Node n1;
    n1.s = "Node n1";
    n1.a = 10;
    
    Stack stack{n1, 3};
    
    displayStackInfo(stack);
    
    Node n2;
    n2.s = "Node n2";
    n2.a = 20;
        
    Node n3;
    n3.s = "Node n3";
    n3.a = 30;
    
    Node n4;
    n4.s = "Node n4";
    n4.a = 40;
    
    stack.push(n2);
    stack.push(n3);
    stack.push(n4);
    
    displayStackInfo(stack);

    stack.pop();
    
    displayStackInfo(stack);
    
    cout << "=================================" << endl;
    
    return 0;
}

void displayStackInfo(Stack &stack) {
    cout << "Stack Information:" << endl;
    cout << "Top Index: " << stack.getTopIndex() << endl;
    cout << "Capacity: " << stack.getCapacity() << endl;
    stack.displayStack();
}