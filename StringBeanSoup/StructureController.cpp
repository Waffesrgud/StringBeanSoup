//
//  StructureController.cpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/8/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "StructureController.hpp"
#include "IntNodeArray.hpp"
#include <iostream>

using namespace std;

StructureController :: StructureController()
{
    wordNode = Node<string>();
    numberNode = Node<int>();
}

void StructureController :: testNode()
{
    wordNode.setNodeData("great days");
}

void StructureController :: testIntArray()
{
    cout << "Creating an IntNodeArray!" << endl;
    IntNodeArray temp = IntNodeArray(3);
    for(int spot = 0; spot < 3; spot++)
    {
        cout << temp.getIndex(spot) << " is at " << spot << endl;
    }
    for(int spot = 0; spot < 3; spot++)
    {
        temp.setIndex(spot, spot);
    }
    for(int spot = 0; spot < temp.getSize(); spot++)
    {
        cout << temp.getIndex(spot) << " is at " << spot << endl;
    }
}

void StructureController :: start()
{
    cout << "OH GOD NOT THE INTNODEARRAY" << endl;
    testIntArray();
    testNode();
    cout << "we lived! thanks!" << endl;
}
