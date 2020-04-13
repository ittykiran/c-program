#include<stdio.h>
main()
{
	int choice;
	printf("\nMenu Driven Program for what do you wanna eat!");
	printf("\nThe items you can chooses are\n1.pizza(Rs 239)\n2.Burger(Rs 129)\n3.Pasta(Rs 170)\n4.idli(Rs 50)\n5.Dosa(Rs 60)");
	printf("\nPlease Enter the item number among 1 to 5:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:  printf("\nFood item selected-pizza\nPrize-Rs 239");
		         break;
		case 2:    printf("\nFood item selected-Burger\nPrize-Rs 129");
		         break; 
		case 3:  printf("\nFood item selected-Pasta\nPrize-Rs 170");
		         break;	
		case 4:  printf("\nFood item selected-idli\nPrize-Rs 50");
		         break;	
		case 5:	printf("\nFood item selected-Dosa\nPrize-Rs 60");
		         break;	 	 	      
	}
	return 0;
}
