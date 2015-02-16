#include <stdio.h>

#include "utils.h"

int main(int argc, char const *argv[])
{
    for (int a=1; a<500; a++) {
        for (int b=1; b<500; b++) {
            for (int c=1; c<500; c++) {
                if (isPythaNum(a, b, c) && a + b + c == 1000) {
                    printf("%d %d %d\n", a, b, c);
                } 
            }
        }
    }

    return 0;
}