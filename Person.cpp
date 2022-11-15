#include "Person.h"


Person::Person()
{
    this->Name = ""; 
}

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

bool
Person::JSON2Object(Json::Value arg_jv)
{
    
}