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
#include "../BiDirectionalNode_hpp"

// I don't know what I'm even doing, help me please AHHHHHHHHHH [b] pain [/b]

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    virtual void add(Type value) = 0;
    virtual Type remove(int index) = 0;
    DoublyLinkedList()
    {
        size = 0;
        front = nullptr;
        end = nullptr;
    }
    virtual ~DoublyLinkedList() = 0;
    
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    this->size = 0;
    this->front = nullptr;
    this->end = nullptr;
}





#endif /* DoublyLinkedList_hpp */
