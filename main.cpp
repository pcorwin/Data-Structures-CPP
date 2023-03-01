#include <iostream>
#include "Stack.cpp"

int stackDriver(){
    Stack<int> int_stack;
    for (int i = 10; i > 0; i--) {
        int_stack.push(i);
    }
    int_stack.topElement();
    while (!int_stack.isEmpty()){
        int_stack.pop();
    }
    return 0;
}

int main(){
    stackDriver();
    return 0;
}

