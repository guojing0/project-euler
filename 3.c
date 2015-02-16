#include <stdio.h>

#include "utils.h"

int main(int argc, char const *argv[])
{
    long long num = 600851475143;

    for (int i=1; i*i<=num; i++) {
        if (num % i == 0 && isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}