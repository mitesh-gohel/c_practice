//Print binary of given numver

#include<stdio.h>
int main()
{
	int num =0, i =0, m = 1, ans = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	for (i = 31; i>=0; --i)
	{
		ans = num & (m << i);
		if(ans)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	return 0;
}
