//
//  Queue.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/14/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include "BiDirectionalNode.hpp"
#include "DoublyLinkedList.hpp"

template <class Type>
class Queue : public DoublyLinkedList<Type>
{
private:
public:
    Queue();
    ~Queue();
    void add(Type data);
    void enqueue(Type data);
    Type remove(int index);
    Type dequeue();
    Type peek();
    
};

template <class Type>
Queue<Type> :: Queue() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
Queue<Type> :: ~Queue()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this->getFront();
    }
}

template <class Type>
void Queue<Type> :: add(Type value)
{
    enqueue(value);
}

template <class Type>
void Queue<Type> :: enqueue(Type data)
{
    BiDirectionalNode<Type> * newFront = new BiDirectionalNode<Type>(data);
    if(this->getSize() == 0)
    {
        this->setFront(newFront);
    }
    else
    {
        this->getEnd()->setNextPointer(newFront);
        newFront->setPreviousPointer(this->getEnd());
    }
    this->setEnd(newFront);
    this->setSize(this->getSize() + 1);
}

template <class Type>
Type Queue<Type> :: dequeue()
{
    assert(this->getSize() > 0);
    Type value =  this->getFront()->getNodeData();
    BiDirectionalNode<Type> * removeMe = this-> getFront();
    if(this->getSize() == 1)
    {
        this->setEnd(nullptr);
        this->setFront(nullptr);
    }
    else
    {
        this->setFront(removeMe->getNextPointer());
        this->getFront()->setPreviousPointer(nullptr);
    }

    delete removeMe;
    this->setSize(this->getSize() - 1);
    
    return value;
}

template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0 && this->getSize() > 0);
    BiDirectionalNode<Type> * temp = this->getIndex(index);
    Type data = temp->getNodeData();
    if(this->getSize() == 1)
    {
        delete this->getFront();
    } else {
        this->getIndex(index + 1)->setPreviousPointer(this->getIndex(index - 1));
        this->getIndex(index - 1)->setNextPointer(this->getIndex(index + 1));
        delete &temp;
    }

    return data;
}

template <class Type>
Type Queue<Type> :: peek()
{
    assert(this->getSize() > 0);
    
    return this->getFront()->getNodeData();
}
#endif /* Queue_hpp */
