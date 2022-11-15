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
Thing::JSON2Object(Json::Value arg_j)
{
    
}