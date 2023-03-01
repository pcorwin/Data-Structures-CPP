//
// Created by phoebe on 2/28/23
//

#include "Queue.h"
#include "iostream"
using namespace std;

template <class Q> Queue<Q>::Queue(){
    tail = -1;
    head = 0;
    length = 0;
}

template <class Q> void Queue<Q>::enqueue(Q x){
    if (isFull()){
        cout << "Queue is full\n";
    }
    else {
        cout << "Queued element: " << x << endl;
        tail = tail + 1;
        qu[tail] = x;
        length++;
    }
}

template <class Q> Q Queue<Q>::dequeue(){
    if (isEmpty()) {
        cout << "Queue is empty\n";
    }
    else {
        Q dequeued_element = qu[head];
        head = head+1;
        length--;
        cout << "Dequeued element: " << dequeued_element << endl;
        return dequeued_element;
    }
}

template <class Q> Q Queue<Q>::tailElement(){
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Tail element: " << qu[tail] << endl;
        return qu[tail];
    }
}

template <class Q> Q Queue<Q>::headElement(){
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Head element: " << qu[head] << endl;
        return qu[head];
    }
}

template <class Q> bool Queue<Q>::isEmpty(){
    if (length == 0)
        return true;
    return false;
}

template <class Q> bool Queue<Q>::isFull(){
    if (length == SIZE)
        return true;
    return false;
}

template <class Q> int Queue<Q>::capacity(){
    return SIZE;
}

template <class Q> int Queue<Q>::size(){
    return (length);
}
