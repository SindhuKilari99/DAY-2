 #include <stdio.h>
int main()
{
	int startYear, endYear, i;
	printf("Print leap years between two given years \n");
	printf("Enter Start year: ");
   	scanf("%d", &startYear);
	printf("Enter End year: ");
   	scanf("%d", &endYear);
	
	printf("Leap years:\n");	
	for(i=startYear; i <= endYear; i++){
		
		if( (i % 4==0) && (i % 100!=0) || (i % 400==0) )
		{
			printf("%d\n", i);
		}
	}
	
    return 0;
}
