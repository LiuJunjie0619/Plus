#ifndef QUEUE_H
#define QUEUE_H
#include "customer.h"

typedef Customer Item;

class Queue
{
public:
    Queue(int qs = Q_SIZE);                 //create queue with a qs limit
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);        //add item to end
    bool dequeue(Item & item);              //remove item from front
private:
    //class scope definitions
    //Node is a nested structure definition local to this c
    enum{ Q_SIZE = 10 };
    struct Node
    {
        Item item;
        struct Node * next;
    };
    //private class members
    Node * front;           //pointer to front of Queue
    Node * rear;            //pointer to rear of Queue
    int items;              //current number of items in Queue
    const int qsize;        //maximum number of items in Queue
    //preemptive definitions to prevent public copying
    Queue(const Queue & q) : qsize(0){}
    Queue & operator=(const Queue & q){return *this;}
};

#endif // QUEUE_H
