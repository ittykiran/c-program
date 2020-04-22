#include<stdio.h>
main()
{
	char ch;
	int marks;
	do
	{
	system("cls");
	printf("Enter the marks to calculate the grade:");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	{
		printf("\nGrade Secured: 'A'");
	}
	else if(marks>=70&&marks<=100)
	{
		printf("\nGrade Secured: 'B'");
	}
	else if(marks>=55&&marks<=100)
	{
		printf("\nGrade Secured: 'C'");
	}
	else if(marks>=40&&marks<=100)
	{
		printf("\nGrade Secured: 'D'");
	}
	else if(marks<40&&marks>0)
	{
		printf("\nGrade Secured: 'F'");
	}
	else
	{
		printf("\nInvalid Marks");
	}
	fflush(stdin);
	printf("\nDo you wish to continue:(Y/N)");
	ch=getchar();
   }while(ch=='y');
}
