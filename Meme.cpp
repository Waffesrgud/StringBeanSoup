//
//  Meme.cpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/13/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include <stdio.h>
#include "Meme.hpp"

Meme :: Meme()
{
    this->title = "booooooring";
    this->dankness = 0;
    this->hipsterQuotient = 0;
    this->mainstream = false;
}

Meme :: Meme(string title)
{
    this->title = title;
    this->dankness = title.length();
    this->hipsterQuotient = 3.14;
    this->mainstream = false;
}

int Meme :: getDankness()
{
    return dankness;
}

double Meme :: getHipsterQuotient()
{
    return hipsterQuotient;
}

string Meme :: getTitle()
{
    return title;
}

bool Meme :: isMainstream()
{
    return mainstream;
}

void Meme :: setMainstream(bool isMain)
{
    this->mainstream = isMain;
}
