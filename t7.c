//Check behavior of comma operator

#include<stdio.h>

int main()
{
	int i = (10, 20);
	printf("i = %d \n", i);
	//int a = 10,20;		//This will give error
	//printf("a = %d \n", a);
	return 0;
}
