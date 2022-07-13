#include <stdio.h>
int main()
{
	
	float f,c;
	
	scanf("%f",&c);
	
	f=(c*9/5)+32;
	
	c=(f-32)*5/9;
	
	printf("Cel to FH %f\n",f);

	printf("FH to Cel %f\n",c);
}
