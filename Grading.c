#include<stdio.h>
int main()
{
	int a;
	printf("Enter the marks: ");
	scanf("%d",&a);
	printf("%s", a>85?"Grade A":(a>70?"Grade B":(a>55?"Grade C":(a>40?"Grade D":"Grade F"))));
	return 0;
}
