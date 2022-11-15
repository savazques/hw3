#include "Time.h"
#include "ecs36b_Common.h"



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