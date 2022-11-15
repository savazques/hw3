#ifndef _TIME_H
#define _TIME_H 

#include "ecs36b_Common.h"

class Time
{
    public: 
    string when; 
    Time(); 
    Time(string); 
    virtual Json::Value dump2JSON();  
    virtual bool JSON2Object(Json::Value); 
   
}; 

#endif