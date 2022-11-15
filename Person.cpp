#include "Person.h"

Person::Person(string name)
{
    this->Name = name; 
}

Json::Value Person::dump2JSON(void)
{
    Json::Value result; 
    result["name"] = Name;
    return result;    
    
}