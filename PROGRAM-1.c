#include <stdio.h>
#include <stdlib.h>
int main()
{

	long int n,sum=0;
	
	scanf("%ld",&n);
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	
	printf("%ld",sum);
}

