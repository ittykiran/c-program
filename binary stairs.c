#include<stdio.h>
main()
{
	int i,j,k;
	printf("\nBinary stairs of six rows to come down!\n");
	for(i=1;i<=6;i++)
	{
		j=i;
	  for(k=1;k<=j;k++)
	  {
	  	printf("01");
		  }	
		  printf("\n");
	}
	return 0;
}
