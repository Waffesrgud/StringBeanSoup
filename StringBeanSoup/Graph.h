//
//  Graph.h
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 5/9/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM] [MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTravesrsal(Graph<Type> graph, int vertex, bool markedVerticies[]);
public:
    Graph();
    ~Graph();
    
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    Type& operator [] (int vertex);
    Type operator [] (int vertex);
    
};

#endif /* Graph_hpp */
