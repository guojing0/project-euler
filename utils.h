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

int fac(int x)
{
    long sum = 1;

    for (int i=1; i<=x; i++) {
        sum = sum * i;
    }

    return sum;
}