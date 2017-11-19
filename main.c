#include<stdio.h>
#include<stdlib.h>
#include "encription.h"

int main()
{
    	int t ;
	printf("Enter the number of Test case (Range : 0 < t < 10^4) : ");
    	scanf("%d",&t);
	
	printf("\nEnter value P , Q and Encripted message ...(eq : 53 59 2929 (range p,q : 0 < (p,q) < 10^4 , o < msg < 10^8))\n");
        
	int i = 1;
	
    	while(t--)
    	{
        	long int p,q,msg;
		long int e = 2;

		printf("\nTest case %d: ",i);

		scanf("%ld%ld%ld",&p,&q,&msg);

        	long int n = p*q;
        	phi = (p-1)*(q-1);

		long int x;
		long int y;

        	e = scoprime(phi,p,q);
        	long int d;

		gcdExtended(e,phi,&x,&y);
        	d = ((x%phi)+phi)%phi;
		printf("\nOutput of %d test case : ",i++);
        	printf("%lld\n", fun(msg,d,n));

		if(t)
		{
			printf("\n--------------------------------------------------------------\n");
		}
    	}
}
