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
#include <iostream>
#include "Node.hpp"

using namespace std;

template <class Type>
class Array
{
private:
    Node<Type> * front;
    int size;
public:
    Array<Type>();
    Array<Type>(int size);
    
    ~Array<Type>();
    Array<Type>(const Array<Type> & toBeCopied);
    void operator = (const Array<Type> & toBeAssigned);
    
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
    
    int getSize() const;
    Node<Type> * getFront() const;
};

template <class Type>
Array<Type> :: ~Array()
{
    int count = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        //STOP THIS RIGHT NOW C++
        front = front->getNodePointer();
        cout << "Moving to the next node. At: "  << count << endl;
        delete remove;
        cout << "Front is deleting..." << endl;
        remove = front;
        cout << "Moving front..." << endl;
        count--;
        cout << "Front is at: " << front << " count is: " << count << endl;
    }
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = size;
    for(int index = 1; index < size; index++)
    {
        Node<Type> * currentNode = new Node<Type>();
        currentNode->setNodePointer(front);
        front = currentNode;
    }
    
}

template <class Type>
Array<Type> :: Array(const Array<Type> & toBeCopied)
{
    this-> size = toBeCopied.getSize();
    this-> front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * temp = new Node<Type>();
        temp->setNodePointer(front);
        front = temp;
    }
    
    Node<Type> * copyTemp = toBeCopied.getFront();
    Node<Type> * updated = this->front;
    for(int index = 0; index < size; index++)
    {
        updated->setNodeData(copyTemp-> getNodeData());
        updated = updated->getNodePointer();
        copyTemp = copyTemp->getNodePointer();
    }
}

template <class Type>
Array<Type> :: Array()
{
    //This is only to trick C++ into compiling. There's no other reason. Do NOT use this.
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    Type value = 0;
    Node<Type> * curr = front;
    for(int position = 0; position < index; position++)
    {
        curr = curr->getNodePointer();
    }
    
    value = curr -> getNodeData();
    return value;
}

template <class Type>
Node<Type> * Array<Type> :: getFront() const
{
    return front;
}

template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type value)
{
    assert(index >= 0 && index < size);
    
    Node<Type> * current = front;
    for(int position = 0; position < index; position = position)
    {
        current = current->getNodePointer();
        position++;
    }
    current->setNodeData(value);
}

#endif /* Array_hpp */
