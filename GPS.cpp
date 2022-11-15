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
    
}