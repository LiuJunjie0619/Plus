#ifndef QUEUETP_H
#define QUEUETP_H
#include <iostream>
template <typename Item>
class QueueTP
{
private:
    enum{Q_SIZE = 10};
    //Node is a nested class definition
    class Node
    {
    public:
        Item m_item;
        Node * next;
        Node(const Item & i) : m_item(i),next(nullptr){}
    };
    Node * m_front;
    Node * m_curr;
    int m_items;
    const int m_qsize;
    QueueTP(const QueueTP & q) : m_qsize(0){}
    QueueTP & operator=(const QueueTP & q)
    {
        std::cout << "QueueTP & operator=(const QueueTP & q)" << std::endl;
        return *this;
    }
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool isempty() const
    {
        return m_items == 0;
    }
    bool isfull() const
    {
        return m_items == m_qsize;
    }
    int queuecount() const
    {
        return m_items;
    }
    bool enqueue(const Item & item);
    bool dequeue(Item & item);
};


template <typename Item>
QueueTP<Item>::QueueTP(int qs) : m_qsize(qs)
{
    m_front = m_curr = 0;
    m_items = 0;
}

template <typename Item>
QueueTP<Item>::~QueueTP()
{
    Node * temp;
    while(m_front != 0)
    {
        temp = m_front;
        m_front = m_front->next;
        delete temp;
    }
}

template <typename Item>
bool QueueTP<Item>::enqueue(const Item &item)
{
    if (isfull())
        return false;
    Node * add = new Node(item);

    m_items++;
    if (m_front == 0)
    {
        m_front = add;
        m_front->next = nullptr;
    }
    else
    {
        m_curr = m_front;
        while (m_curr->next != nullptr)
            m_curr = m_curr->next;
        m_curr->next = add;
    }
    //m_curr=add;
    //m_rear =add;
    return true;
}

template <typename Item>
bool QueueTP<Item>::dequeue(Item &item)
{
    if(m_front == 0)
        return false;
    item = m_front->m_item;
    m_items--;
    Node * temp = m_front;
    m_front = m_front->next;
    delete temp;
    if(m_items == 0)
        m_curr = 0;
    return true;
}
#endif // QUEUETP_H
