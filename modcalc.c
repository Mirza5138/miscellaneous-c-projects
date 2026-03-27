#include <stdio.h>

long int m = 999973;
long int a = 76922;
long int c = 618017;

int main() {
    unsigned long long int x = (a + c) % m;
    printf("1\n");
    
    while (x != 1) {
        printf("%llu\n", x);
        x = (a * x + c) % m;
    }

    return 0;
}