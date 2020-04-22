#include<stdio.h>
main()
{
	int arr[3][3],i,j,*ptr,sum;
	ptr=&arr[0][0];
	printf("\nEnter the row wise elements of 3*3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",ptr);
			ptr++;
		}
		printf("\n");
	}
	ptr=&arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d]\t",*ptr);
		    ptr++;	
		}
		printf("\n");
	}
	printf("\nThe diagonal elements are:");
	ptr=&arr[0][0];
	printf("\n%d\t%d\t%d",*ptr,*(ptr+4),*(ptr+8));
	sum=*ptr+*(ptr+4)+*(ptr+8);
	printf("\nSum of diag = %d",sum);
	return 0;
}
