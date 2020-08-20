#include<stdio.h>
main()
{
	printf("Pick any number from 1 to 5\n");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item - Lasagne\nPrice - Rs.325");
			break;
		case 2:
			printf("Food item - Crispy Chicken Wings\nPrice - Rs.250");
			break;
		case 3:
			printf("Food item - Chocolate Shake\nPrice - Rs.170");
			break;
		case 4:
			printf("Food item - Double Cheese Margherita Pizza\nPrice - Rs.450");
			break;
		case 5:
			printf("Food item - Chilly Hakka Noodles\nPrice - Rs.285");
			break;
		default: printf("Invalid choice");	
	}
}
