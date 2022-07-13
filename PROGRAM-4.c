#include<stdio.h>
int main()
{
    long int rem,num,cnt=0;
    printf("enter the lottery tickets:");
    scanf("%ld",&num);
    label:
    if(num!=0)
    {
        rem=num%10;
        if(rem==3)
        cnt++;
        num/=10;
        goto label;
    }
    if(cnt>0)
    printf("%ld",cnt);
}





#include <stdio.h>
int main()
{
	
	int a[]={1,3,4,5,6,3,3,6,3,3,3};

	int n=sizeof(a)/sizeof(a[0]);
	int i,count=0;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==3)
			
			count++;
	}
	
	printf("%d",count);
}
