#include<stdio.h>
int main()
{
	int x=10, y=20;
	printf("Before swapping, x = %d and y = %d",x,y);
	/* Now we'll alter the value of each of these variables using mathematical calculations in such a way that eventually the initial value of y gets stored in x and vice versa*/
	x=x+y;//x=30(10+20)
	/*Now we have 30 stored in x*/
	y=x-y;//y=10(30-20)
	/*Now we have 30 stored in x and 10 stored in y*/
	x=x-y;//x=20(30-10)
	printf("\nAfter swapping x = %d and y = %d",x,y);
	return 0;
	
}
