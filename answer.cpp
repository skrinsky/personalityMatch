//
//  Answer.cpp
//  P6_EECS_harmony
//
/*
 
 * PARTNER NAMES  Summer Krinsky Andrew Goulston

*/
//  Created by mdorf on 11/27/13.
//  Copyright (c) 2013 mdorf. All rights reserved.
//

#include "Answer.h"
#include <iostream>
#include <string> // is this needed ?
using namespace std;

istream& operator>> (istream& ins, Answer& ans) {
    ans.read(ins);    // once you implement member function "read" uncomment this line
    return ins;
}

ostream& operator<< (ostream& out, const Answer& ans) {
    ans.write(out);    // once you implement member function "write" uncomment this line
    return out;
}

//implementation of all private and public member functions begins here

// Public Functions
// Constructor
Answer::Answer()
{
    //Attribute attribute = Attribute(); // is this correct ?
    text = "";
}
//Accessors

Attribute Answer::getAttribute() const
{
    // Attribute returnAttribute = attribute;
    return attribute;
}

string Answer::getText() const
{
    //string returnText = text;
    return text;
}


//Modifiers
void Answer::setAttribute(Attribute inAttribute)
{
    attribute =  inAttribute;
}

void Answer::setText(string inText)
{
    text = inText;
}

void Answer::read(istream& ins)
{
    ins >> attribute;
    getline(ins, text);
}

void Answer::write(ostream& out) const
{
    out << text;
}


