//
//  IntNode.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/6/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
public:
    IntNode();
    IntNode(int value);
    IntNode(int value, IntNode * nextNode);
    int getNodeData();
    IntNode * getNodePointer();
    void setNodeData(int nodeData);
    void setNodePointer(IntNode * nodePointer);
private:
    int nodeData;
    IntNode * nodePointer;

};

#endif /* IntNode_hpp */
