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
    void setTitle(string title);
    int getDankness();
    double getHipsterQuotient();
    bool isMainstream();
    string getTitle();
    void setDankness(int dank);
    void setHipsterQuotient(double hipsterQuotient);
    void setMainstream(bool mainstream);
};

Meme :: Meme()
{
    this->title = "Harambe!";
    this->dankness = 100;
    this->hipsterQuotient = 100.0;
    this->mainstream = false;
}

Meme :: Meme(string title)
{
    this->title = title;
    this->dankness = 0;
    this->hipsterQuotient = 0.0;
    this->mainstream = true;
}

void Meme :: setDankness(int dank)
{
    this->dankness = dank;
}
void Meme :: setHipsterQuotient(double hipsterQuotient)
{
    this->hipsterQuotient = hipsterQuotient;
}
void Meme :: setMainstream(bool mainstream)
{
    this->mainstream = mainstream;
}
void Meme :: setTitle(string title)
{
    this->title = title;
}

double Meme :: getHipsterQuotient()
{
    return hipsterQuotient;
}
int Meme :: getDankness()
{
    return dankness;
}
bool Meme :: isMainstream()
{
    return mainstream;
}
string Meme :: getTitle()
{
    return title;
}

#endif /* Meme_h */
