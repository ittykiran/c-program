#include<stdio.h>
int sumofdig(int number);
main()
{
   int number;
   printf("\nEnter a number to find sum of its digits:");
   scanf("%d",&number);
   printf("\nThe sum of digits in %d is %d",number,sumofdig(number));
   return 0;	
}
int sumofdig(int number)
{
	int rem,sum;
	rem=number%10;
	if(number==0)
	{
		return 0;
	}
	else
	{
		return sum=rem+sumofdig(number/10);
	}
	
}
