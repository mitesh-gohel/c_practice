//typedef

#include<stdio.h>
int main()
{
	typedef int my_type;
	my_type a = 10;
	printf("%ld \n", sizeof(my_type));
	return 0;
}
