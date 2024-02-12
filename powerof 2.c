//write a program that takes an integer as input and returns true if the input is power of 2
#include <stdio.h>
int main()
 {    
 int n;  

   printf("enter a number"); 
      scanf("%d",&n);

        if(n &&((n & n-1)==0)) 

          printf("true");
      else   
           printf("false");
   }