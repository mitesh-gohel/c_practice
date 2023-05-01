//To check little endian or big endian without union

#include<stdio.h>

int main()
{
	int a = 10;
	char *char_p;
	char_p = &a;
	if (*char_p == 10)
		printf("Little endian \n");
	else 
		printf("Big endian");
	return 0;
}
