/**
 * @author      : tommy (tommy@ven1xus-mbp)
 * @file        : exercise1-22
 * @created     : Monday Jan 07, 2019 22:58:01 EST
 */

// Fold the input text across some arbitrary column of input (in this case: MAX_COLUMN)

#include <stdio.h>

#define MAX_COLUMN 35
#define MAX_LENGTH 1000

int main(void) {
    char input[MAX_LENGTH];
    
    char c;
    int len;

    while(len < MAX_LENGTH && (c = getchar()) != '\n') {
        if(c != '\t'  && c != '\b' && c != ' ') {
            input[len] = c;
        } else {
            input[len] = '/';
        }
        len++; 
    } 
    input[len] = '\0';
    
    for(int i = 0; input[i] != '\0';i++) {
        if(i%MAX_COLUMN == 0) printf("\n");
        putchar(input[i]);
    }
    printf("\n");
    return 0;
}
