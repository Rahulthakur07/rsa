#include "encription.h"

//#ifndef "encription.h"
long long int fun(long int msg,long int e ,long int n)
{
	long long int x = 1;
	long long int power = msg % n;

	for(int i = 0 ; i <= sizeof(int)*8 ; ++i)
	{
		int least_sig_bit = 1 & (e>>i);

		if(least_sig_bit)
			x = ((x%n)*(power%n))% n;

		power = ((power %n) * (power % n)) % n;
	}

	return x;	
}

long int gcdExtended(long int a, long int b, long int *x, long int *y)
{
	long int k, r, x1, x2, y1, y2, d;

    	if (b == 0) 
	{
        	*x = 1; *y = 0;
        return a;
    	}

    	x2 = 1, x1 = 0, y2 = 0, y1 = 1;

    	while (b > 0) 
	{
        	k = a / b; r = a - k * b;
        	*x = x2 - k * x1; *y = y2 - k * y1;
        	a = b; b = r;
        	x2 = x1; x1 = *x; y2 = y1; y1 = *y;
    	}

    	*x = x2; *y = y2;
    	d=*y;
    	
	if(d>phi)
        	d=d%phi;
    	if(d<0)
        	d=d+phi;
    	return d;
}

long int scoprime(long int a, long int p, long int q)
{
    	int c;

    	if((a%2)!=0)
        	return 2;
    	for(int i=3; i<a; i+=2)
    	{
        	for (int j=1; j<=i; j++)
            		if (i%j == 0)
                		c++;
        	if(c==2)
            		if((a%i)!=0 && i!=p && i!=q)
                		return i;
        	c=0;
    	}
    	return 1;
}
//#endif
