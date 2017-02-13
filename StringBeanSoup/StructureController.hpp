//
//  StructureController.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/8/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "../Node.hpp"
#include <string>
using namespace std;

class StructureController
{
public:
    void start();
    void testIntArray();
    void testNode();
    StructureController();
private:
    Node<string> wordNode;
    Node<int> numberNode;
};


#endif /* StructureController_hpp */
