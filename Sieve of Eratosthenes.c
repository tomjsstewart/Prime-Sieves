#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

void main()
{
    int limit = sqrt(INT_MAX);

    printf("%d\n%d\n\n", INT_MAX, limit);
    int Hlimit;
    if (limit % 2 == 0)
        Hlimit = (limit/2)-1;
    else
        Hlimit = (int)(limit/2);
    int sieve[Hlimit];
    int primes[Hlimit];

    int count = 0;
    int i, j;
    int value;

    for (i=0; i<Hlimit; i++)
    {
        //Set all numbers to prime in the sieve
        sieve[i] = 1;
        //Initialise primes to 0;
        primes[i] = 0;
    }
    //Save the only even prime
    primes[0] = 2;
    count=1;

    //Generates all primes and saves primes below sqrt(limit) --> Does this work???
    //                                                        --> Need to find out which limit to use
    for (i=0; i<(int)(sqrt(Hlimit)); i++)
    {
        if (sieve[i]) //If prime
        {
            //Save the prime
           // primes[count] = 2*i+3;
            //count++;
            value = 2*i+3;
            //Starting from the value squared remove all multiples
            for (j=2*i*i+6*i+3; j<Hlimit; j+=value)
            {
                //mark all multiples of the primes as composite
                sieve[j] = 0;
            }
        }
    }

    //Saves primes
    for (i=0; i<Hlimit; i++)
    {
        if (sieve[i])
        {
            //Save primes
            primes[count] = 2*i+3;
            count++;
        }
    }
/*
    //Prints out primes
    for (i=0; i<count; i++)
    {
        printf("%d\n", primes[i]);
    }
*/
}
