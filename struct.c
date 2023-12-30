#include <stdio.h>
#include <string.h>
  struct student {
        char name [15];
        int age ;
        int Class ;
    }std1 ,std2 ,std3 ;

    typedef struct car {
        char brand [10];
        int price ;
    }Care_Data ;

    typedef enum {
        saterday,
        sunday,
        monday,
    }days;
void main (){
    struct student std1 = {"Mohamed",15,3};
    printf("\n student name: %s \n student age:%d \n student class:%d",std1.name,std1.age,std1.Class);

    std2.age = 10 ;
    std2.Class = 3 ;
   strcpy(std2.name,"Ali");      // std2.name [15] = "ali";

    printf("\n student name: %s \n student age:%d \n student class:%d",std2.name,std2.age,std2.Class);

    Care_Data car1 ;
    car1.price = 12;
    printf("\n %d",car1.price);

    days D1 ;
    D1 = monday;
    printf("\n %d",D1);
}
