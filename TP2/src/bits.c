#include <stdio.h>

int main() {
    int d = 0x10001000; 
    int bit4, bit20;
    int result;

    bit4 = (d >> 28) & 1;

    bit20 = (d >> 12) & 1;

    if (bit4 == 1 && bit20 == 1) {
        result = 1;
    } else {
        result = 0;
    }

    printf("%d\n", result);

    return 0;
}
