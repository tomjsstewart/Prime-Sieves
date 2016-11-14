def SieveOfEratosthenes(limit):
    numbers = [x for x in range(2, limit + 1)] 
    primes = [True] * (limit - 1)
    results = []

    p = 2 
    for x in numbers:
        if primes[x - 2] == True:
            p = numbers[x - 2]
            for num in numbers:
                if (num * p) > limit:
                    break 
                else: 
                    primes[(num * p) - 2] = False 
        else:
            pass 

    for x in numbers: 
        if primes[x - 2] == True:
            results.append(x)


    return results

