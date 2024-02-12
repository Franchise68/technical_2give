// write a program to generate the fibonacci sequence up to 100.
#include <stdio.h>
int main()
{ 
  int i,x=0,y=1,s; 

    printf("\nfiboncci sequence"); 
      printf("\n%d\t%d",x,y); 

     for(i=1;i<11;i++) 

      {   
          s=x+y; 

           printf("\t%d",s); 
           
             x=y; 
               y=s; 
               }
               }