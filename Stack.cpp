//
// Created by phoebe on 2/28/23
// Custom stack class

#include "Stack.h"
#include "iostream"

template <class S> Stack<S>::Stack(){
    top = -1;
}

template <class S> void Stack<S>::push(S x){
    if (isFull()){
        cout << "Stack is full\n";
    }
    cout << "Inserted element: " << x << endl;
    top = top + 1;
    st[top] = x;
}

template <class S> bool Stack<S>::isEmpty(){
    if (top == -1)
        return true;
    return false;
}

template <class S> bool Stack<S>::isFull(){
    if (top == (SIZE-1))
        return true;
    return false;
}

template <class S> int Stack<S>::capacity(){
    return SIZE;
}

template <class S> int Stack<S>::size(){
    return (top + 1);
}

template <class S> S Stack<S>::topElement(){
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Top element: " << st[top] << endl;
        return st[top];
    }
}

template <class S> S Stack<S>::pop(){
    S popped_element = st[top];
    top = top - 1;
    cout << "Removed element: " << popped_element << endl;
    return popped_element;
}