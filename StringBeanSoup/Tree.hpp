//
//  Tree.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 4/11/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <assert.h>

template <class Type>
class Tree
{
private:
    int height;
    int size;
    bool complete;
    bool balanced;
public:
    virtual ~Tree();
    virtual void printToFile() = 0;
    virtual void inOrderTransversal() = 0;
    virtual void postOrderTransversal() = 0;
    virtual void preOrderTransversal() = 0;
    
    int getHeight() const;
    int getSize() const;
    bool isComplete() const;
    bool isBalanced() const;
    
    void setHeight(int height);
    void setSize(int size);
    void setComplete(bool complete);
    void setBalanced(bool balanced);
};

template <class Type>
int Tree :: getHeight()
{
    return height;
}

template <class Type>
int Tree :: getSize()
{
    return size;
}

template <class Type>
bool Tree :: isComplete()
{
    return complete;
}

template <class Type>
bool Tree :: isBalanced()
{
    return balaced;
}

template <class Type>
void Tree<Type> :: setHeight(int height)
{
    this->height = height;
}

template <class Type>
void Tree<Type> :: setSize(bool balanced)
{
    this->size = size;
}

template <class Type>
void Tree<Type> :: setComplete(bool complete)
{
    this->complete = complete;
}

template <class Type>
void Tree<Type> :: setBalanced(bool balanced)
{
    this->balanced = balanced;
}

#endif /* Tree_hpp */
