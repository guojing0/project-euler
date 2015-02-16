#include <stdio.h>

#include "utils.h"

int isCurNum(int startNum)
{
    int sum, evalNum, lastDigit;
    sum = 0;
    evalNum = startNum;
    lastDigit = 0;

    while (evalNum) {
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