#define TRUE 1
#define FALSE 0

int isPrime(int x)
{
    if (x <= 1) {
        return FALSE;
    }

    for (int i=2; i*i<=x; i++) {
        if (x % i == 0) {
            return FALSE;
        }
    }

    return TRUE;
}

int isPythaNum(int x, int y, int z)
{
    if (pow(x, 2) + pow(y, 2) == pow(z, 2)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

long fac(int x)
{
    long sum = 1;

    for (int i=1; i<=x; i++) {
        sum = sum * i;
    }

    return sum;
}