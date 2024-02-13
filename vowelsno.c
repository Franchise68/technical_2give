// write a program that counts the number of vowels in a sentence.
#include <stdio.h>
#include<string.h>
int main() {  
 char ch[50];
 //Declare a character array to store the input string, assuming maximum length of 50 characters 
   int i,count=0; 
    printf("\n\nenter the string: ");  
      gets (ch);    // Loop through each character of the input string  
        for(i=0;i<strlen(ch);i++)
        { 
           //check if the current characteris a vowel  
             if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' ||ch[i]=='o' || ch[i]=='u')  
               {        count++;//increment the counts if the character is vowel.  
              
                 }
                 printf("\n\treturns:%d",count);  
                 printf("\n");
                 } 
                 return 0;
                 }
