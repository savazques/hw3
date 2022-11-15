#ifndef _TIME_H
#define _TIME_H 

#include "ecs36b_Common.h"

class Time
{
    public: 
    string when; 
    Time(); 
    Time(string); 
    Json::Value dump2JSON();  
   
}; 

#endif