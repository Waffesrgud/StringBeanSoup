//
//  DoubleList.h
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/9/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef DoubleList_hpp
#define DoubleList_hpp

#include "BiDirectionalNode.hpp"

class DoubleList : DoublyLinkedList
{
private:
public:
    Type * getFromIndexFast();
    void add(Type value);
    Type * remove();
};

template <class Type>
Type * DoublyLinkedList<Type> :: getFromIndexFast(int index)
{
    assert(index >=0 && index < this->getSize());
    Type valueAtIndex;
    BiDirectionalNode<Type> * reference;
    if(index < this->getSize() / 2)
    {
        reference = this->getFront();
        for(int position = 0; position < index; position++)
        {
            reference = reference->getNextPointer();
        }
    }
    else
    {
        reference = this-> getEnd();
        for(int position = this-> getSize() - 1; position > index; position--)
        {
            reference = reference->getPreviousPointer();
        }
    }
    value = reference->getNodeData();
    return ValueAtIndex;
}

template <class Type>
void DoubleList<Type> :: add(Type value)
{
    BiDirectionalNode<Type> * addedNode = new BiDirectionalNode<Type>(value);
    if(this->getSize() == 0)
    {
        this->setFront(addedNode);
    }
    else
        
    {
        this->getEnd()->setNextPointer(addedNode);
        addedNde->setPreviousPointer(this->getEnd());
    }
    this->setEnd(addedNode);
    this->setSize(this->getSize() + 1);
}

template <class Type>
Type DoubleList<Type> :: remove(int index)
{
    Type derp;
    BiDirectionalNode<Type> * nodeToTakeOut = this->getFront();
    for(int spot = 0; spot < index; spot++)
    {
        nodeToTakeOut = nodeToTakeOut->getNextPointer();
    }
    derp = nodeToTakeOut->getNodeData();
    
    BiDirectionalNode<Type> * prev = nodeToTakeOut->getPreviousPointer();
    BiDirectionalNode<Type> * next = nodeToTakeOut->getNextPointer();
    
    prev->setNextPointer(next);
    next->setPreviousPointer(prev);
    delete nodeToTakeOut;
    this->setSize(this->getSize() - 1);
    return derp;
}

#endif /* DoubleList_hpp */
