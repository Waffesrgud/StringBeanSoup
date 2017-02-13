//
//  IntNodeArray.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/8/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef IntNodeArray_hpp
#define IntNodeArray_hpp
#include "IntNode.hpp"

class IntNodeArray
{
private:
    IntNode * head;
    int size;
public:
    IntNodeArray(int size);
    int getSize();
    int getIndex(int index);
    void setIndex(int index, int value);
};

#endif /* IntNodeArray_hpp */
