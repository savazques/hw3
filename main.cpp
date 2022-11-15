
#include "ecs36b_Common.h"
#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Time.h" 
#include "Record.h"

  
int main ()
{

Person RedRidingHood{"Red Riding Hood"};
Thing Cap{"a cap of red Velvet"};
GPS where{"somewhere"};
Time when{"One day"}; 

Person Mom{"her mother"};
Thing Cake{"A piece of cake"}; 
Thing Wine{"wine"}; 

Person Wolf{"Wolf"};
GPS Woods{" a particular spot in the woods"}; 
Thing Anotherthing{"thing"};

Person Grandma{"Grandma"}; 
Thing Home{"was at her home"};
GPS OakTrees{"3 large  oak trees"}; 

Thing NULLpt{""};
Person NULLptr{""}; 



Record Record1(RedRidingHood, NULLptr,  Cap, NULLpt, where, when);
cout<<"Record 1"<<endl; 
Record1.dump2JSON(); 


Record Record2(Mom, RedRidingHood, Cake, Wine, where, when );
cout<<"Record 2"<<endl;
Record2.dump2JSON();

Record Record3(Wolf, RedRidingHood, Anotherthing, NULLpt, Woods, when); 
cout<<"Record 3"<<endl;
Record3.dump2JSON(); 

Record Record4(Grandma, NULLptr, Home, NULLpt, OakTrees, when); 
cout<<"Record 4"<<endl;
Record4.dump2JSON(); 


return 0; 

}