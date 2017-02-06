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
    
    int nice [] = {1, 2, 3, 4, 5};
    int niceLength = 5;
    int meme [] = {6, 7, 8, 9, 10};
    int memeLength = 5;
    int i = 0;
    for (i = 0; i < memeLength; i++)
    {
        
    }
    
    
    
    cout << string << endl;
    cout << string.size() << " characters long." << endl;
    cout << string[5] << " is the sixth character."<< endl;
    cout << string.empty() << "*100% chance that this string is empty. :)"<< endl;
    cout << "ZA "<< string.substr(7,11) << ", TOKI WA TOMARE" << endl;
    cout << "What a wonderful " << string.substr(7) << endl;
    cout << "Hello, world! is " <<string.compare("Hello to the world!") << " characters shorter than Hello to the world!" << endl;
    cout << "With those out of the way, now we can really have some fun. :)" << endl;
    
    if (string == "Hello, world!")
    {
        cout << "Well, I guess you should start. What is your name, friend?" << endl;
        cin >> string;
        cout << "Interesting. " << string << " is a lovely name, friend." << endl;
    }
    
    cout << "So, " << string << ", how are you? Well, I hope?" << endl;
    cin >> string;
    cout << "You're feeling " << string << "? That's... I can't tell. I'm pretyped text. Sorry to tell you, but I have no thought nor emotion. All I am is bits of electricity. By(t)e." << endl;
}

