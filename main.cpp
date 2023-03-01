#include <iostream>
#include "Stack.cpp"

int stackDriver(){
    Stack<int> int_stack;
    cout<<"Stack Capacity: "<< int_stack.capacity() << endl;
    for (int i = 10; i > 0; i--) {
        int_stack.push(i);
        if (int_stack.size()%3==0){
            cout<<"Stack Size: "<< int_stack.size()<<endl;
        }
    }
    int_stack.topElement();
    while (!int_stack.isEmpty()){
        int_stack.pop();
        if (int_stack.size()%2==0){
            cout<<"Stack Size: "<< int_stack.size()<<endl;
        }
    }
    return 0;
}

int main(){
    stackDriver();
    return 0;
}

