//
//  Meme.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/13/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Meme_h
#define Meme_h
#include <string>

using namespace std;

class Meme
{
private:
    string title;
    int dankness;
    double hipsterQuotient;
    bool mainstream;
public:
    Meme();
    Meme(string title);
    int getDankness();
    double getHipsterQuotient();
    bool isMainstream();
    string getTitle();
    void setDankness(int dank);
    void setHipsterQuotient(double hipsterQuotient);
    void setMainstream(bool mainstream);
};

#endif /* Meme_h */
