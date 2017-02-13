//
//  IntNodeArray.cpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/8/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "IntNodeArray.hpp"
#include <assert.h>

IntNodeArray :: IntNodeArray(int size)
{
    assert(size > 0);
    this->size = size;
    this->head = new IntNode();
    //Since the head is already a valid pointer, it starts at 1. Nice!
    for (int index = 1; index < size; index++)
    {
        IntNode * currentNode = new IntNode();
        currentNode->setNodePointer(head);
        head = currentNode;
    }
}

int IntNodeArray :: getSize()
{
    return size;
}

int IntNodeArray :: getIndex(int index)
{
    assert(index >= 0 && index < size);
    int value = 0;
    IntNode * current = head;
    
    for (int position = 0; position < index; position++)
    {
        
    }
    
    value = current->getNodeData();
    return value;
}

void IntNodeArray :: setIndex(int index, int value)
{
    assert(index >= 0 && index < size);
    IntNode * current = head;
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    current->setNodeData(value);
}


