#include<stdio.h>
int lcm(int,int);
main()
{
	
	int a,b,res,ch;
	do
	{
	printf("\nEnter two numbers:\n");
	scanf("%d%d",&a,&b);
	res=lcm(a,b);
	printf("\nThe LCM of these numbers is %d\n",res);
	printf("\nDo you wish to continue:\n");
	ch=getch();
    }while(ch=='y');
	return 0;
}
int lcm(int a,int b)
{
	int c,d,j=2;
	if(a==1&&b==1)
	{
		return a*b;
	}
	if(a>b)
	{
		c=a;
		d=b;
	}
	else
	{
		c=b;
		d=a;
	}
	while(j<=d)
	{
		if(d%j==0)
		{
			b=d/j;
			if(c%j==0)
			{
				a=c/j;
			}
			else
			{
				a=c;
			}
			return j*lcm(a,b);
			break;
		}
		j++;
		
	}
}
