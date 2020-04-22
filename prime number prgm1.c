#include<stdio.h>
int isprime(int,int);
main()
{
	int num,j=2,count;
	printf("\nEnter a number for checking it a prime or not\n");
	scanf("%d",&num);
	count=isprime(num,j);
	if(count==1)
	{
		printf("\nGiven number is  prime number");
	}
	return 0;
}
int isprime(int num,int j)
{
	int count=1;
	if(j>=num/2)
	{
		
		return count;
	}
	 
	
		if(num%j!=0)
		{
			j++;
		 return isprime(num,j);
		}
		else
		
		{
			printf("\nThe number entered is not a prime");

		}
	
}
