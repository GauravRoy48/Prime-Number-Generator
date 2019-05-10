#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,i,in;

    int primes[200] = {0};
    int primeIndex = 2;

    _Bool isPrime;

    printf("Enter a number (less than 1200) to find the number of primes from 1 to that number: ");
    scanf("%d",&in);

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= in; p = p + 2)
    {
        isPrime = 1;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = 0;

        if (isPrime == 1)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    printf("\nThe number of primes between 1 and %d are: %d\nThey are:\n",in,primeIndex);
    for ( i = 0;  i < primeIndex;  ++i )
         printf ("%i  ", primes[i]);

    printf("\n");
    return 0;
}
