//To check little endian or big endian using union

#include<stdio.h>
int main()
{
	union my_u
	{
		int a;
		char ch;
	};
	union my_u u_var;
	u_var.ch = 7;
	if(u_var.a == 7)
		printf("Little endian \n");
	else 
		printf("Big endian \n");
	return 0;
}
