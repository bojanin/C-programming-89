/* -- -- -- -- -- -- -- -- -- -- -- -- --  

* File Name : spaceReplacer.c

* Purpose : Write a program to copy its input to its output, replacing each string
* of one or more spaces by a single space. DONT USE SCANF/PRINTF

* Creation Date : 07-01-2019

* Last Modified : Mon Jan  7 21:28:10 2019

* Created By : @ven1xus 

-- -- -- -- -- -- -- -- -- -- -- -- -- */

#include <stdio.h>


int main(void) {
    char c;
    while((c = getchar()) != '\n') {
        if (c == ' ' ) putchar(c);
        while( c == ' ' && (c != EOF)) {
            c = getchar();
        }
        putchar(c);
    }
    putchar('\n');
    return 0;
}
