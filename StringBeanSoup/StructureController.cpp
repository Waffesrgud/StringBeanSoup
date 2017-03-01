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


void StructureController :: testPain()
{
    int showDestructor = 0;
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(5);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
    cout << "Uhhh check it fam: " << endl;
    cout << words.getFromIndex(0) << " should be the same as " << copiedWords.getFromIndex(0) << endl;
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

void StructureController :: testArray()
{
    
}

void StructureController :: start()
{
    cout << "OH GOD NOT THE INTNODEARRAY" << endl;
    testIntArray();
    cout << "we lived! thanks!" << endl;
}
