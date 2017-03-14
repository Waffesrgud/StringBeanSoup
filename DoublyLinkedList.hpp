//
//  DoublyLinkedList.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/1/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp

#include <assert.h>
#include <iostream>
#include "BiDirectionalNode.hpp"

// I don't know what I'm even doing, help me please AHHHHHHHHHH [b] pain [/b]

template <class Type>
class DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    virtual void add(Type value) = 0;
    virtual Type * remove(int index) = 0;
    DoublyLinkedList();
    virtual ~DoublyLinkedList();
    
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
    
    void setFront(BiDirectionalNode<Type> front);
    void setEnd(BiDirectionalNode<Type> end);
    void addAtIndex(int index, Type value);
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    this->size = 0;
    this->front = nullptr;
    this->end = nullptr;
}

template <class Type>
void DoublyLinkedList<Type> :: add(Type value)
{
    BiDirectionalNode<Type> newNode;
    newNode->value = value;
    end->setNextPointer(newNode);
    newNode->setPreviousPointer(end);
    this->end = newNode;
    size++;
}

template <class Type>
Type * DoublyLinkedList<Type> :: remove(int index)
{
    assert(size > 0);
    Type temp;
    temp = this->getAtIndex(index)->getValue();
    this->getAtIndex(index+1)->setPreviousPointer(this->getAtIndex(index)->getPreviousPointer);
    delete this->getAtIndex(index);
    
    size--;
    return temp;
}

template <class Type>
int DoublyLinkedList<Type> :: getSize() const
{
    return size;
}

template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getFront() const
{
    return front;
}

template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getEnd() const
{
    return end;
}

template <class Type>
void DoublyLinkedList<Type> :: setFront(BiDirectionalNode<Type> front)
{
    this->front = front;
}

template <class Type>
void DoublyLinkedList<Type> :: setEnd(BiDirectionalNode<Type> end)
{
    this->end = end;
}

template <class Type>
void DoublyLinkedList<Type> :: addAtIndex(int index, Type value)
{
    
}
#endif /* DoublyLinkedList_hpp */
