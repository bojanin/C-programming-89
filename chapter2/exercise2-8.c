/**
 * @author      : tommy (tommy@ven1xus-mbp)
 * @file        : exercise2-8
 * @created     : Wednesday Jan 09, 2019 00:01:56 EST
 */

#include <stdio.h>

int bitcount(unsigned x) {
    int b;
    while(x) {
        x &= (x-1);
        b++;
    }
    return b;
}
int main(void) {
    int total = 255;
    printf("Bitcount of %i: %i\n",total, bitcount(total));
    return 0;
}
