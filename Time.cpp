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
Time::JSON2Object(Json::Value arg_jv)
{
      if( (arg_jv.isNull() == true) || (arg_jv.isObject() != true) )
    {
        return false;
    }


    if (((arg_jv["when"]).isNull( ) == true) || ((arg_jv["when"]).isString() != true) )
    {
        return false;
    }

    this ->when = (arg_jv["when"]).asString().c_str();


    return true;
}