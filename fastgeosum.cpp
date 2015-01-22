lli sum1(lli r,lli n,lli mod)
{
	if(n == 0)
		return 1%mod;
	else if(n==1)
		return (1%mod + r%mod)%mod;
	else if(n%2==1)
		return (sum1(r,1,mod)%mod * sum1(expo(r,2,mod)%mod,(n-1)/2,mod)%mod)%mod;
	else
		return (1%mod + (r%mod * sum1(r,1,mod)%mod * sum1(expo(r,2,mod)%mod,(n-2)/2,mod)%mod)%mod)%mod;
}
