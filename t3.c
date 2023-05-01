//To check behaviour of space before and after %d in scanf
#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number : ");
	scanf(" %d", &a);
	printf("number = %d \n", a);
	return 0;
}
