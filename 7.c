#include <stdio.h>

#include "utils.h"

int main(int argc, char const *argv[])
{
    int num = 1;

    for (int i=0; num<=10001; i++) {
        if (isPrime(i)) {
            printf("%d %d\n", num, i);
            num++;
        }
    }

    return 0;
}