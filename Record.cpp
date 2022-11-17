#include "Record.h"
#include "Person.h"

Record::Record()
{
    this->person = Person{};
    this -> person2 = Person{};
    this -> thing2 = Thing{}; 
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
        result["Person 2"] = jvResult; 
        
    
    jvResult = (this->thing).dump2JSON();
        result["Thing"] = jvResult;
    
    jvResult = (this->thing2).dump2JSON();
        result["Thing 2"] = jvResult;

    

    jvResult = (this->loc).dump2JSON(); 
        result["GPS"] = jvResult;

    jvResult = (this->when).dump2JSON(); 
        result["Time"] = jvResult; 
    
   //cout<< result.toStyledString()<< endl;
    


    return result;
}

bool 
Record::JSON2Object
(Json::Value arg_jv)
{
    if ((arg_jv.isNull() == true) || 
        (arg_jv.isObject() != true))
    {
        return false; 
    }


if  (((arg_jv["loc"]).isNull() == true ) || 
    ((arg_jv["loc"]).isObject() != true) )
{
    return false; 
}
(this -> loc).JSON2Object(arg_jv["area"]); 

if ( ((arg_jv["thing"]).isNull() == true) ||  
    ((arg_jv["thing"]).isObject() != true) )
{
    return false;
}
(this -> thing).JSON2Object(arg_jv["item"]);

if ( ((arg_jv["person"]).isNull() == true) || 
    ((arg_jv["person"]).isObject() != true) )
{
    return false; 
} 
(this -> person).JSON2Object(arg_jv["person"]);

if (((arg_jv["when"]).isNull() == true) || 
    ((arg_jv["when"]).isObject() != true))
{
    return false;
} 
(this -> when).JSON2Object(arg_jv["when"]); 

if  (((arg_jv["name"]).isNull() == true) || 
    ((arg_jv["name"]).isObject()!= true))
{
    return false;
}
(this -> person2).JSON2Object(arg_jv["name"]);
    
    
if  (((arg_jv["name"]).isNull() == true) || 
    ((arg_jv["item"]).isObject() != true))
{
    return false; 
} 
(this -> thing2).JSON2Object(arg_jv["item"]); 


return true;




}