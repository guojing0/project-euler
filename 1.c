#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int sum = 0;

    for (int i=0; i<1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);

    return 0;
}