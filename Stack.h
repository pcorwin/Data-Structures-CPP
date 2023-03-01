//
// Created by phoebe on 2/28/23
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

#define SIZE 10

template <class S> class Stack {
public:
    Stack();

    void push(S x);
    S pop();
    S topElement();

    bool isEmpty();
    bool isFull();

    int capacity();
    int size();

private:
    int top;
    S st[SIZE];
};
#endif //DATASTRUCTURES_STACK_H
