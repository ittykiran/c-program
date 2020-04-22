#include<stdio.h>
main()
{
	int count=0,a,b;
	printf("Program to swap two numbers\n");
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		while(b<a)
		{
			b++;
			count++;
		}
		a=a-count;
		printf("\nValues of a and b after swapping are a=%d and b=%d",a,b);
	}
	else if(b>a)
	{
		while(a<b)
		{
			a++;
			count++;
		}
		b=b-count;
		printf("\nValues of a and b after swapping are %d and %d",a,b);
	}else
	{
		printf("\nAlready both the values are equal");
	}
	return 0;
}
