#include<stdio.h>
#include <stdlib.h>
#include <math.h>
    int main(void){
        puts("printable ASCII_character: "); 
        for(int i = 32; i < 126; i++){
            putchar((i%16 == 15) ? '\n' : i);
        }
    return 0;
}

// mistakes in the code:
// missed a semicolon in the for loop ';'
// missed a bracket in the putchar method
// puts instead of printf, which is used to print formatted output

//note 
// difference  between 'puts' and 'printf':
// - 'puts' adds a newline character , doesnt suppost format specifiers and variable substitution
// - 'printf' does not add a newline character by default
