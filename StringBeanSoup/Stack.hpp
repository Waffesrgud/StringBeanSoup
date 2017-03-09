//
//  Stack.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/1/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "DoublyLinkedList.hpp"

template <class Type>
class Stack : DoublyLinkedList<Type>
{
private:
public:
    Stack();
    void add(Type value);
    void push(Type value);
    void ply(Type value);
    BiDirectionalNode * peek();
    BiDirectionalNode * pop();
    
}

template <class Type>
void Stack<Type> :: add(Type valueToAdd) : DoublyLinkedList<Type> :: add(valueToAdd)
{

}

template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode(addedThing);
    
    if(this->size == 0 || this->front == nullptr || this->end == nullptr)
    {
        this->front = addToStack;
        this->end = addToStack;
    }
    else
    {
        this->end->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->end);
    }

    this->size++;
    end = addToStack;
}

template <class Type>
void Stack<Type> :: pop()
{
    assert(this->getSize() > 0);
    Type removed = this->getEnd()->getNodeData();
    
    BiDirectioanlNode<Type> * update = this->getEnd();
    update = update->getPreviousPointer();
    
    if(update != nullptr)
    {
    update->setNextPointer(nullptr);
    }
    delete this->getEnd();
    
    this->setEnd(update);
    
    this->setSize(this->getSize() - 1);
    
    return removed;
}

template <class Type>
Type Stack<Type> :: remove(int index)
{
    assert(index == this->getSize() - 1 && this->getSize() > 0);
    return pop();
}
#endif /* Stack_hpp */
