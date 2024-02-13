//program that accepts a string as input ,capitilizes the first letter of each word in the string
#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100];
    int i;
    int FirstL = 1; // Flag to track if the current letter is the first letter of a word
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (FirstL && isalpha(str[i])) { // Check if it's the first letter of a word and if it's alphabetic
            str[i] = toupper(str[i]); // Convert the letter to uppercase
            FirstL = 0; 
        } else if (isspace(str[i])) { // If current character is space, next character will be considered first letter
            firstl = 1; 
        }
    }
    printf("the string is: %s", str);
    return 0;
}
