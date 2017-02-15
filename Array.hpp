//
//  Array.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/15/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>
#include "Node.hpp"

template <class Type>
class Array
{
private:
    Node<Type> * front;
    int size;
public:
    Array<Type>(int size);
    int getSize();
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
};

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = size;
    
    for(int index = 1; index < size; index++)
    {
        IntNode * currentNode = new IntNode();
        currentNode->setNodePointer(front);
        front = currentNode;
    }
    
}

template <class Type>
Array<Type> :: Array()
{
    //This is only to trick C++ into compiling. There's no other reason. Do NOT use this.
}

template <class Type>
int Array<Type> :: getIndex(int index)
{
    assert(index >= 0 && index < size);
    int value = 0;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    value = current->getNodeData();
    return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int index, int value)
{
    assert(index >= 0 && index < size);
    
    Node<Type> * current = front;
    for(int position = 0; position < index; position+)
    {
        current = current->getNodePointer();
    }
    current->setNodeData(value);
}

int IntNodeArray :: getSize()
{
    return size
}
#endif /* Array_hpp */
