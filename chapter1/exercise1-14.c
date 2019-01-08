/**
 * @author      : tommy (tommy@ven1xus-mbp)
 * @file        : exercise1-14
 * @created     : Monday Jan 07, 2019 21:59:19 EST
 */

// Write a program to print a histogram of the frequency of different characters in its input.
// Dont use scanf
// I dont check for all ascii values just the computer readable ones I believe
// It starting printing unknown symbols after ascii value 128


#include <stdio.h>

int main(void) {
    int chars[255];

    for(int i = 0; i < 256; i++)
        chars[0] = 0;    
    char c;

    while((c = getchar()) != '\n') {
        chars[c]++;
    }
    for(int i = 0; i < 128; i++) {
        printf("%c:", (char)i);
        for(int j = 0; j < chars[i]; j++){
            printf("|");
        }
        printf("\n");
    }
    return 0;
}

