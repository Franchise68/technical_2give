//a program that takes an integer as input and returns  an integer with inverse digit ordering.
#include<stdio.h>

 int main() {

  int x , y ;   
    printf("enter numbers:");
     scanf("\n%d",&x); 

     while(x>0)

      {    
       y=x%10; 
          printf("%x\n",y);  
          x=x/10; 
          }
          return 0;
          } 