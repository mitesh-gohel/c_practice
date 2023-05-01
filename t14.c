//To check structure padding
#include<stdio.h>
int main()
{
	struct st1
	{
		int a;
		int b;
	};
	struct st2
	{
		int a;
		char ch;
	};
	struct st3
	{
		int a;
		char ch1;
		char ch2;
	};


	printf("sizeof(struct st1) = %ld\n", sizeof(struct st1));
	printf("sizeof(struct st2) = %ld\n", sizeof(struct st2));
	printf("sizeof(struct st3) = %ld\n", sizeof(struct st3));

	return 0;
}
