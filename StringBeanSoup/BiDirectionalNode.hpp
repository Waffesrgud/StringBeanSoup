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
class BiDirectionalNode : public Node<Type>
{
private:
    Type data;
    BiDirectionalNode<Type> * nextPointer;
    BiDirectionalNode<Type> * previousPointer;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionaNode<Type> * next);
    
    Type getNodeData();
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
    void setNodeData(Type data);
    void setNextPointer(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
};

template <class Type>
BiDirectionalNode :: BiDirectionalNode() : Node()
{
    this->previousPointer = nullptr;
    this->previous = nullptr;
}

template <class Type>
BiDirectionalNode :: BiDirectionalNode(Type data) : Node()
{
    this->previousPointer = nullptr;
    this->previous = nullptr;
}

template <class Type>
BiDirectionalNode :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next)
{
    this->previous = previous;
}

template <class Type>
Type BiDirectionalNode :: getData()
{
    return data;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode :: getNextPointer()
{
    return this->nextPointer;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode :: getPreviousPointer()
{
    return this->previous;
}

template <class Type>
void BiDirectionalNode :: setNodeData(Type data)
{
    this->data = data;
}

template <class Type>
void BiDirectionalNode :: setNextPointer(BiDirectionalNode<Type> * next)
{
    this-> nextPointer = next;
}

template <class Type>
void BiDirectionalNode :: setPreviousPointer(BiDirectionalNode<Type> * previous)
{
    this->previous = previous;
}
#endif /* BiDirectionalNode_h */
