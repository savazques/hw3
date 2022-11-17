#include "Thing.h"
Thing::Thing()
{
    this->Description = " "; 
}

Thing::Thing(string arg)
{
    this->Description = arg;
}

Json::Value Thing::dump2JSON(void)
{
    Json::Value result; 
    result["item"] = Description; 

    return result;

}

bool
Thing::JSON2Object(Json::Value arg_jv)
{
        if( (arg_jv.isNull() == true) || (arg_jv.isObject() != true) )
    {
        return false;
    }


    if (((arg_jv["Description"]).isNull( ) == true) || ((arg_jv["Description"]).isString() != true) )
    {
        return false;
    }

    this->Description = (arg_jv["Description"]).asString();


    return true;
}