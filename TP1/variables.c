#include <stdio.h>

int main() {

    char c = 'A';
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 50000;

    int i = -100000;
    unsigned int ui = 3000000000U;

    long int li = -2000000000L;
    unsigned long int uli = 4000000000UL;

    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

  
    printf("===== Types entiers =====\n");
    printf("char : %c (%d)\n", c, c);
    printf("unsigned char : %u\n", uc);

    printf("short : %d\n", s);
    printf("unsigned short : %u\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("\n===== Types à virgule flottante =====\n");
    printf("float : %.2f\n", f);
    printf("double : %.9f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}

