#ifndef _PERSON_H
#define _PERSON_H

#include "ecs36b_Common.h"

class Person
{   
    public: 
    string Name;
    Person();
    Person(string); 
    Json::Value dump2JSON(); 
}; 

#endif