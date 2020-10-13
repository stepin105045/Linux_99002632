int isPrime(int n)
{
	int prime;
	for(prime=2;prime <=n/2;i++)
	{
		if(n%prime!=0)
			continue; // prime number
		else
			return 1;
	}
}
