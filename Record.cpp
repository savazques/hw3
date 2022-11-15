#include "Record.h"
#include "ecs36b_Common.h" 
#include "Person.h"

Record::Record()
{
    this->person = Person{};
    this->thing = Thing{}; 
    this->loc = GPS{}; 
    this->when = Time{}; 
}


Record::Record (Person arg_name, Person arg2_names, Thing arg_item, Thing arg2_items,  GPS arg_location, Time arg_hour)
{
    this->person2 = arg2_names; 
    this->person = arg_name;
    this->thing = arg_item;
    this->thing2 = arg2_items;
    this->loc = arg_location;
    this->when = arg_hour;
}

Json::Value Record::dump2JSON(void)
{
    Json::Value result{}; 
    Json::Value jvResult;

    jvResult = (this->person).dump2JSON(); 
        result["Person 1"] = jvResult;

    jvResult = (this->person2).dump2JSON(); 
        result["Person2 2"] = jvResult; 
        
    
    jvResult = (this->thing).dump2JSON();
        result["Thing"] = jvResult;
    
    jvResult = (this->thing2).dump2JSON();
        result["Thing 2"] = jvResult;

    

    jvResult = (this->loc).dump2JSON(); 
        result["GPS"] = jvResult;

    jvResult = (this->when).dump2JSON(); 
        result["Time"] = jvResult; 
    
   cout<< result.toStyledString()<< endl;
    


    return result;
}