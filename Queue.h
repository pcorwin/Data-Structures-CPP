//
// Created by phoebe on 2/28/23.
//

#ifndef DATASTRUCTURES_QUEUE_H
#define DATASTRUCTURES_QUEUE_H

#define SIZE 10

template <class Q> class Queue {
public:
    Queue();

    void enqueue(Q x);
    Q dequeue();
    Q tailElement();
    Q headElement();

    bool isEmpty();
    bool isFull();

    int capacity();
    int size();

private:
    int tail;
    int head;
    int length;
    Q qu[SIZE];
};


#endif //DATASTRUCTURES_QUEUE_H
