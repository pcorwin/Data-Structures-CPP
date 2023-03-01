//
// Created by phoebe on 2/28/23.
//

#include "Queue.h"
#include "iostream"
using namespace std;

template <class Q> Queue<Q>::Queue(){
    tail = -1;
}

template <class Q> void Queue<Q>::enqueue(Q x){
    if (isFull()){
        cout << "Queue is full\n";
    }
    else {
        cout << "Queued element: " << x << endl;
        tail = tail + 1;
        qu[tail] = x;
    }
}

template <class Q> Q Queue<Q>::dequeue(){
    Q dequeued_element = qu[tail];
    tail = tail - 1;
    cout << "Dequeued element: " << dequeued_element << endl;
    return dequeued_element;
}

template <class Q> Q Queue<Q>::headElement(){
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Head element: " << qu[tail] << endl;
        return qu[tail];
    }
}

template <class Q> bool Queue<Q>::isEmpty(){
    if (tail == -1)
        return true;
    return false;
}

template <class Q> bool Queue<Q>::isFull(){
    if (tail == (SIZE - 1))
        return true;
    return false;
}

template <class Q> int Queue<Q>::capacity(){
    return SIZE;
}

template <class Q> int Queue<Q>::size(){
    return (tail + 1);
}
