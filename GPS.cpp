#include "GPS.h"


GPS::GPS()
{
    this->Description = " "; 
}

GPS::GPS(string arg)
{
    this->Description = arg; 
}

Json::Value GPS::dump2JSON(void)
{
    Json::Value result; 
    result["area"] = Description;

    return result;
}

bool
GPS::JSON2Object(Json::Value arg_jv)
{
    if( (arg_jv.isNull() == true) || (arg_jv.isObject() != true) )
    {
        return false;
    }


    if (((arg_jv["area"]).isNull( ) == true) || ((arg_jv["area"]).isString() != true) )
    {
        return false;
    }

    this -> Description = (arg_jv["area"]).asString();


    return true;
}