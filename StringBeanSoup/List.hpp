//
//  List.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/21/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

template <class Type>
class List
{
private:
    int size;
    Node<Type> * front;
public:
    List<Type>();
    List<Type>(const List<Type> & source);
    ~List<Type>();
    
    void addAtIndex(int index, Type value);
    void add(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    bool contains(Type data);
    int getSize() const;
    Node<Type> * getFront();
};

template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this-> front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    size++;
}

void List<Type> :: AttAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        size++;
    }
#endif /* List_hpp */
