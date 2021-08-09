
#include <stdio.h>
#include <math.h>

//to find gcd
int gcd(int a, int h)
{
    int temp;
    while (1)
    {
        temp = a % h;
        if (temp == 0)
            return h;
        a = h;
        h = temp;
    }
}

int main()
{
    //2 random prime numbers
    int  p = 3;
    int q = 7;
     int n = p * q;
    int count;
    int totient = (p - 1) * (q - 1);

    //public key
    //e stands for encrypt
    int e = 2;

    //for checking co-prime which satisfies e>1
    while (e < totient)
    {
        count = gcd(e, totient);
        if (count == 1)
            break;
        else
            e++;
    }

    //private key
    //d stands for decrypt
    int d;

    //k can be any arbitrary value
    int k = 2;

    //choosing d such that it satisfies d*e = 1 + k * totient
    d = (1 + (k * totient)) / e;
    int msg = 12;
    int c = pow(msg, e);
    double m = pow(c, d);
    c = fmod(c, n);
    m = fmod(m, n);

    printf("Message data = %d", msg);
    printf("\np = %d", p);
    printf("\nq = %d", q);
    printf("\nn = pq = %d", n);
    printf("\ntotient = %d", totient);
    printf("\ne = %d", e);
    printf("\nd = %d", d);
    printf("\nEncrypted data = %d", c);
    printf("\nOriginal Message Sent = %lf", m);

    return 0;
}