#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int primes(size_t n);

int main()
{
    primes(10000000);

    return 0;
}


int primes(size_t n)
{
    char * sieve;
    size_t i, j, lim=sqrt(n)+1;
    sieve=malloc(n);
    memset(sieve, 1, n);
    for(i=3; i<lim; i+=2)
    {

        if(sieve[i])
        {
            for(j=i*i; j<n;j+=2*i)
            {
                sieve[j]=0;
            }
        }
    }
    printf("%d\n",2);
    for(i=3; i<n; i+=2)
    {
        if(sieve[i]==1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
