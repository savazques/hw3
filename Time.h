#ifndef _TIME_H
#define _TIME_H 


class Time
{
    public: 
    string when; 
    Time(); 
    Time(string); 
    Json::Value dump2JSON();  
   
}; 

#endif