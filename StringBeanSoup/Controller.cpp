//
//  Controller.cpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <String>
#include <iostream>

using namespace std;

void Controller :: start()
{
    string string = "Hello, world!";
    stringPlay(string);
}

void Controller :: stringPlay(string string)
{
    cout << string << endl;
    cout << string.size() << " characters long." << endl;
    cout << string[5] << " is the sixth character."<< endl;
    cout << string.empty() << "*100% chance that this string is empty. :)"<< endl;
    cout << "ZA "<< string.substr(7,11) << ", TOKI WA TOMARE" << endl;
    cout << "What a wonderful " << string.substr(7) << endl;
    cout << "Hello, world! is " <<string.compare("Hello to the world!") << " characters shorter than Hello to the world!" << endl;
    cout << "With those out of the way, now we can really have some fun. :)" << endl;
}

