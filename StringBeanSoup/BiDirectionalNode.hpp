//
//  BiDirectionalNode.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template <class Type>
class BiDirectionalNode
{
private:
    Type data;
    BiDirectionalNode<Type> * nextPointer;
    BiDirectionalNode<Type> * previousPointer;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    
    Type getNodeData();
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
    void setNodeData(Type data);
    void setNextPointer(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
};

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode()
{
    this->data = nullptr;
    this->previousPointer = nullptr;
    this->nextPointer = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data)
{
    this->data = data;
    this->previousPointer = nullptr;
    this->nextPointer = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next)
{
    this->data = data;
    this->previousPointer = previous;
    this->nextPointer = next;
}

template <class Type>
Type BiDirectionalNode<Type> :: getNodeData()
{
    return data;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointer()
{
    return this->nextPointer;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getPreviousPointer()
{
    return this->previousPointer;
}

template <class Type>
void BiDirectionalNode<Type> :: setNodeData(Type data)
{
    this->data = data;
}

template <class Type>
void BiDirectionalNode<Type> :: setNextPointer(BiDirectionalNode<Type> * next)
{
    this->nextPointer = next;
}

template <class Type>
void BiDirectionalNode<Type> :: setPreviousPointer(BiDirectionalNode<Type> * previous)
{
    this->previousPointer = previous;
}
#endif /* BiDirectionalNode_h */
