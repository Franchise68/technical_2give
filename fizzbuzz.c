// write a program that prints the numbers from 1 to 100 .for multiples of 3 ,print "fizz";and for numbers that are multiples of 5,print "buzz";and for both multiples of 3 and 5 print"fizzbuzz"
#include <stdio.h>
int main(){
 for(int i=1;i<=100;i++){
     if(i%3==0&&i%5==0)
     {
         printf("fizzbuzz");
     }
     else if(i%3==0){
         printf("fizz");
     }
     else if(i%5==0){
         printf("buzz\n");
     }
     else{
         printf("%d\n",i);
     }
 }
     return 0;
 }