
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
//dumping to JSON
Json::Value jv = Record1.dump2JSON(); 

char filename1[] = "Record1.json";
int rc = myJSON2File(filename1, &jv);
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
//dumping 2 json 
Json::Value jv2 = Record2.dump2JSON();

char filename2[] = "Record2.json";
int rv = myJSON2File(filename2, &jv2);
if (rv != 0)
    {
        std::cout << "myJSON2File error"<<std::endl;
        exit(-1);
    }

Json::Value record2_jv;
rv = myFile2JSON(filename2, &record2_jv);
if (rv != 0)
    {
        std::cout << "myJSON2File error" <<std::endl;
        exit (-1); 
    } 
Record new_record2 {}; 
    new_record2.JSON2Object(record2_jv); 
    std::cout << (new_record2.dump2JSON()).toStyledString() << std:: endl;


Record Record3(Wolf, RedRidingHood, Anotherthing, NULLpt, Woods, when); 
cout<<"Record 3"<<endl;
Json::Value jv3 = Record3.dump2JSON(); 

char filename3[] = "Record3.json";
int rj = myJSON2File(filename3, &jv3);
if (rj != 0)
    {
        std::cout << "myJSON2File error"<<std::endl;
        exit(-1);
    }
Json::Value record3_jv;
rj = myFile2JSON(filename3, &record3_jv);
if (rj != 0)
    {
        std::cout << "myJSON2File error" <<std::endl;
        exit (-1); 
    } 

Record new_record3 {}; 
    new_record3.JSON2Object(record3_jv); 
    std::cout << (new_record3.dump2JSON()).toStyledString() << std:: endl;


Record Record4(Grandma, NULLptr, Home, NULLpt, OakTrees, when); 
cout<<"Record 4"<<endl;
Json::Value jv4 = Record4.dump2JSON(); 

char filename4[] = "Record4.json";
int ra = myJSON2File(filename4, &jv4);
if (ra != 0)
    {
        std::cout << "myJSON2File error"<<std::endl;
        exit(-1);
    }

Json::Value record4_jv;
ra = myFile2JSON(filename4, &record4_jv);
if (ra != 0)
    {
        std::cout << "myJSON2File error" <<std::endl;
        exit (-1); 
    } 

Record new_record4 {}; 
    new_record4.JSON2Object(record4_jv); 
    std::cout << (new_record4.dump2JSON()).toStyledString() << std:: endl;

return 0; 

}