#include <stdio.h>

#include "utils.h"

int main(int argc, char const *argv[])
{
    int num;
    long sum;
    num = 2000000;
    sum = 0;

    for (int i=1; i<num; i++) {
        if (isPrime(i)) {
            sum = sum + i;
        }
    }

    printf("%ld\n", sum);

    return 0;
}