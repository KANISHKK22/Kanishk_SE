#include<stdio.h>

void main()
{
	int i;
	int arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter Element[%d]");
		scanf("%d",&arr[i]);
	}

    for(i=0;i<5;i++)
    {
    	printf("Element[%d] = %d\n" ,i,arr[i]);
	}
}