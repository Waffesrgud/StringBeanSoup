//
//  Node.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/13/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type>* nodePointer;
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNodePointer();
    void setNodeData(Type value);
    void setNodePointer(Node<Type> * nextPointer);
};

template <class Type>
Node<Type> :: Node<Type>()
{
    nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node<Type>(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node<Type>(Type value, Node<Type> * nextNode)
{
    this->nodeData = value;
    this->nodePointer = nextNode;
}

Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return nodePointer;
}




#endif /* Node_hpp */



