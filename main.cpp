#include <iostream>
#include <cstring>

#include "Stack.cpp"
#include "Queue.cpp"

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

int queueDriver(){
    Queue<string> str_queue;
    cout<<"Queue Capacity: "<< str_queue.capacity() << endl;
    for (int i = 0; i < 11; ++i) {
        str_queue.enqueue(('a'+to_string(i)));
    }
    str_queue.headElement();
    str_queue.tailElement();
    while (!str_queue.isEmpty()){
        str_queue.dequeue();
        cout<<"Queue Size: "<< str_queue.size()<<endl;
    }
    return 0;
}

int main(){
    //stackDriver();
    queueDriver();
    return 0;
}

