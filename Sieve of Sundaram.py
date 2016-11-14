def Sieve_of_Sundaram(maxn):
	
	limit = maxn + 1
	
	sieve = [True] * limit
	sieve[1] = False
	
	for i in range(1, limit//2):
		f = 2 * i + 1
		for j in range(i, limit//2):
			k = i + j * f
			if k <= maxn:
				sieve[k] = False
			else:
				break 
	return[2,3] + [2*k+1 for k in range(1, int(maxn/2)) if sieve[k]]

	
	
