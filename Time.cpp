#include "Time.h"



Time::Time()
{
    this->when = " "; 
}

Time::Time(string arg)
{
    this->when = arg; 
}

Json::Value Time::dump2JSON(void)
{
    Json::Value result; 
    result["when"] = when;
    return result;
}

bool 
Time::JSON2Object(Json::Value)
{
    
}