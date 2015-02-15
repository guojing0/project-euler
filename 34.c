#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int fac(int x)
{
    long sum = 1;

    for (int i=1; i<=x; i++) {
        sum = sum * i;
    }

    return sum;
}

int isCurNum(int startNum)
{
    int sum, evalNum, lastDigit;
    sum = 0;
    evalNum = startNum;
    lastDigit = 0;

    while (evalNum != 0) {
        lastDigit = evalNum % 10;
        evalNum = evalNum / 10;
        sum = sum + fac(lastDigit);
    }

    if (startNum == sum) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main(int argc, char const *argv[])
{
    for (int i=3; i<=9999999; i++) {
        if (isCurNum(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}