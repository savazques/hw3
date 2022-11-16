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
    
    if ((arg_jv.isNull() == true) || (arg_jv.isObject() != true))
    {
        return false;
    }

    if (((arg_jv["Name"]).isNull() == true) || ((arg_jv["Name"]).isString() != true))
    {
        return false;
    }
    this->Name = (arg_jv["Name"]).asString();

    return true;
}