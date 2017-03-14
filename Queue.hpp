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

void Queue<Type> :: add(Type value)
{
    enqueue(value);
}

template <class Type>
void Queue :: enqueue(Type data)
{
    assert(index == 0 && this->getSize() > 0);
    BiDirectionalNode * newFront = new BiDirectionalNode<Type>(data);
    if(size == 0)
    {
        this->setFront(newFront);
    }
    else
    {
        this->getEnd()->setNextPointer(added);
        added->setPreviousPointer(this->getEnd());
    }
    this->setEnd(added);
    this->setSize(this->getSize() + 1);
}

template <class Type>
Type Queue<Type> :: dequeue()
{
    assert(this->getSize() > 0);
    Type value =  this->getFront->getNodeData();
    BiDirectionalNode<Type> * removeMe = this-> getFront();
    if(this->size == 1)
    {
        this->setEnd(nullptr);
        this->setFront(nullptr);
    }
    else
    {
        this->setFront(removeMe->getNextPointer());
    }
    this->setFront()->setPreviousPointer(nullptr);
    
    delete removeMe;
    this->setSize(this->getSize() - 1);
    
    return value;
}

template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0 && this->getSize() > 0);
}

template <class Type>
Type Queue<Type> :: peek()
{
    assert(this->getSize() > 0);
    
    return this->getFront()->getNodeData();
}
#endif /* Queue_hpp */
