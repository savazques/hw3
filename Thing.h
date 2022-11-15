#ifndef _THING_H
#define _THING_H

#include "ecs36b_Common.h"


class Thing
{
   public:
   string Description;
   Thing();
   Thing(string); 
   Json::Value dump2JSON(); 
}; 

#endif