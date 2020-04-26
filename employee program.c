#include<stdio.h>
# define MAX 20
struct employee
{
	int empno;
	char empname[25];
	int salary;
	char department[25];
};
main()
{
	int i;
	struct employee emp[MAX];
	printf("\n Enter employee details:\n");
	for(i=0;i<MAX;i++)
	{
		printf("Number:");
		scanf("%d",&emp[i].empno);
		printf("Name:");
		scanf("%s",emp[i].empname);
		printf("Salary:");
		scanf("%d",&emp[i].salary);
		printf("Department:");
		scanf("%s",emp[i].department);
	}
	printf("Number\t Name\t Salary\t Department\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d\t %s\t %d\t %s\n",emp[i].empno,emp[i].empname,emp[i].salary, emp[i].department);
	}
}
