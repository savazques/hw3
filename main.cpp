
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

int rc; 

Record Record1(RedRidingHood, NULLptr,  Cap, NULLpt, where, when);
cout<<"Record 1"<<endl; 
Json::Value jv = Record1.dump2JSON(); 

char filename1[] = "Record1.json";
rc = myJSON2File(filename1, &jv);
if (rc != 0)
    {
        std::cout << "myJSON2File error"<<std::endl;
        exit(-1);
    }
Json::Value record1_jv;
rc = myFile2JSON(filename1, &record1_jv);
if (rc != 0)
    {
        std::cout << "myJSON2File error" <<std::endl;
        exit (-1); 
    } 
Record new_record1 {}; 
    new_record1.JSON2Object(record1_jv); 
    std::cout << (new_record1.dump2JSON()).toStyledString() << std:: endl;


Record Record2(Mom, RedRidingHood, Cake, Wine, where, when );
cout<<"Record 2"<<endl;
Record2.dump2JSON();

char filename2[] = "Record2.json";
rc = myJSON2File(filename2, &jv);
if (rc != 0)
    {
        std::cout << "myJSON2File error"<<std::endl;
        exit(-1);
    }

Record Record3(Wolf, RedRidingHood, Anotherthing, NULLpt, Woods, when); 
cout<<"Record 3"<<endl;
Record3.dump2JSON(); 

char filename3[] = "Record3.json";
rc = myJSON2File(filename3, &jv);
if (rc != 0)
    {
        std::cout << "myJSON2File error"<<std::endl;
        exit(-1);
    }

Record Record4(Grandma, NULLptr, Home, NULLpt, OakTrees, when); 
cout<<"Record 4"<<endl;
Record4.dump2JSON(); 

char filename4[] = "Record4.json";
rc = myJSON2File(filename4, &jv);
if (rc != 0)
    {
        std::cout << "myJSON2File error"<<std::endl;
        exit(-1);
    }

return 0; 

}