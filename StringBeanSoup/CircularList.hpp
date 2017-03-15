//
//  CircularList.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/15/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#import "DoublyLinkedList.hpp"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * shiftToNode(int index);
public:
    CircularList();
    ~CircularList();
    void add(Type data);
    Type remove(int index);
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    BiDirectionalNode<Type> * addMe = new BiDirectionalNode<Type>(data);
    
    if(this->getSize() == 0)
    {
        this->setFront(addMe);
        this->setEnd(addMe);
        addMe->setPreviousPointer(this->getFront());
        this->getFront()->setNextPointer(this->getEnd());
    }
    else
    {
        this->getEnd()->setNextPointer(addMe);
        addMe->setPreviousPointer(this->getEnd());
        addMe->setNextPointer(this->getFront());
        this->getFront()->setPreviousPointer(addMe);
        this->setEnd(addMe);
    }
    this->setSize(this->getSize() + 1);
}

template <class Type>
BiDirectionalNode<Type> * CircularList<Type> :: findNode(int index)
{
    BiDirectionalNode<Type> * nodeToFind;
    if(index < this->getSize() / 2)
    {
        noteToFind = this->getFront();
        removed = this->getFront();
        for(int spot = 0; spot < index; spot++)
        {
            removed = removed->getNextPointer();
        }
    }
    else {
        removed = this->getEnd();
        for(int spot = this->getSize() -1; spot > index; spot--)
        {
            removed = removed->getPreviousPointer();
        }
    }
    return nodeToFind();
}

template <class Type>
Type CircularList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->getSize());
    
    Type removedValue;
    
    BiDirectionalNode<Type> * removed = findNode(index);
    
    removedValue = removed->getNodeData();
    BiDirectionalNode<Type> * oldPrevious = removed->getPreviousPointer();
    BiDirectioanlNode<Type> * oldNext = removed->getNextPointer();
    
    if (this-> getSize() > 1)
    {
        oldPrevious->setNextPointer(oldNext);
        oldNext->setPreviousPointer(oldPrevious);
    }
    else
    {
        this->setFront(nullptr);
        this->setEnd(nullptr);
    }
    
    delete removed;
    this->setSize(this->getSize()-1);
    
    return removedValue;
    }

template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->getSize());
    Type replaced;
    BiDirectionalNode<Type> * current = findNode(index);
    
    retrieved = current->getNodeData()
    return retrieved;
}

template <class Type>
void CircularList<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < this->getSize());
    Type replaced;
    BiDirectionalNode<Type> * current = findNode(index);
    
    replaced = current->getNodeData();
    current->setNodeData(data);
    
    return replaced;
}
#endif /* CircularList_hpp */
