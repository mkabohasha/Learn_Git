#include <stdio.h>
#include <string.h>
void main ()
{
    char n [15] , p[15] ;
    char name [4] [15] = {{"Mohamed"},{"Ali"},{"Mohsen"},{"waleed"}};
    char pass [4] [15] = {{"1"},{"2"},{"3"},{"4"}};

    printf("\nEnter Your Name:");
    gets(n);
    printf("\nEnter Your Pass:");
    gets(p);


    for(int i = 0 ; i < 4 ; i++){
        if (strcmp(name[i],n) == 0){
                if (strcmp(pass[i0],p) == 0){
                    printf("hello %s ^~^",n);
                    break;
               }
               else{
                     printf("you entered wrong pass");
                     break;
                    }
         }else printf("\n name not exist"); break;
}
            }

