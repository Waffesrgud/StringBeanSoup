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
    
}

template <class Type>
BiDirectionalNode :: BiDirectionalNode(Type data) : Node()
{
    
}

template <class Type>
BiDirectionalNode :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next)
{
    
}

template <class Type>
Type BiDirectionalNode :: getData()
{
    return data;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode :: getNextPointer()
{
    
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode :: getPreviousPointer()
{
    
}

template <class Type>
void BiDirectionalNode :: setNodeData(Type data)
{
    
}

template <class Type>
void BiDirectionalNode :: setNextPointer()
{
    
}

template <class Type>
void BiDirectionalNode :: setPreviousPointer()
{
    
}
#endif /* BiDirectionalNode_h */
