#include <stdio.h>
int add (int x , int y);
void main (){

  int (*ptr) (int , int);
  ptr = &add;
  int z = add(5,6);
  printf("\n%d",z);
  printf("\n%d",ptr(4,6));

}
int add (int x , int y){
    int a = x + y ;
    return a;
}

