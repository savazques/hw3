#ifndef _RECORD_H
#define _RECORD_H

#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Time.h"


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
        Json::Value dump2JSON(); 
}; 

#endif