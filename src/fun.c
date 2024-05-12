#include "fun.h"

void print_binary(unsigned long long n, int i) {
    int k;
    for(k = i-1; k >= 0; k--) {
        if ((n >> k) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

void validate_scan(int args) {
    if(args != 1) {
        printf("Error: wrong input\n");
        exit(1);
    }
}
