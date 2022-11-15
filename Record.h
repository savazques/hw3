#ifndef _RECORD_H
#define _RECORD_H

#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Time.h"
#include "ecs36b_Common.h"


class Record
{
    
    private:
        Person person;
        Person person2;
        Thing thing;
        Thing thing2; 
        GPS loc;
        Time when; 
        string object;
    public:   
        Record();  
        Record(Person, Person,  Thing, Thing, GPS, Time);
        virtual Json::Value dump2JSON(); 
        virtual bool JSON2Object(Json::Value); 
}; 

#endif