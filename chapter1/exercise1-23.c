/**
 * @author      : tommy (tommy@ven1xus-mbp)
 * @file        : exercise1-23
 * @created     : Tuesday Jan 08, 2019 15:42:55 EST
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: <./exercise1-23.c> <file.c>\n");
        return EXIT_FAILURE;
    }
    FILE *file = fopen(argv[1], "r");
    if(!file){
        puts("ERROR: File could not be opened, check filename.");
        return -1;
    }

    char c;
    while((c = fgetc(file)) != EOF) {
        if(c == '/') {
            char prev = c;
            if ((c = fgetc(file)) == '*') {
                while((c = fgetc(file)) != EOF) {
                    if (c == '*' && ((c = fgetc(file)) == '/')) {
                        break;
                    }
                }
            } else if (c == '/') {
                while((c = fgetc(file)) != '\n');
                continue;
            } else {
                putchar(prev);
            }
        }
        if(c != '/') {
            putchar(c);
        }
    }
    fclose(file);
    return EXIT_SUCCESS;
}
