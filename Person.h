#ifndef _PERSON_H
#define _PERSON_H



class Person
{   
    public: 
    string Name;
    Person(); 
    Person(string); 
    Json::Value dump2JSON(); 
}; 

#endif