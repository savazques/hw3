#ifndef _GPS_H
#define _GPS_H

#include "ecs36b_Common.h"

class GPS
{
    public:
    string Description;
    GPS();
    GPS(string);  
    Json::Value dump2JSON();  

    private: 
}; 

#endif