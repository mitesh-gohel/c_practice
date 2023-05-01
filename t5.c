/*Print pattern
n=5
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *
*/

#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0, j = 0, k =0;
	printf("Enter a number : \n");
	scanf("%d", &n);
	
	for(i=n-1; i >=0; --i)
	{
		for(j=0; j < n-1-i ; ++j)
			printf(" ");
		for(k=0; k < i+1; ++k)
			printf("* ");
		printf("\n");
	}
	for(i=1; i<n; ++i)
	{
		for(j=0; j < n-1-i ; ++j)
			printf(" ");
		for(k=0; k < i+1; ++k)
			printf("* ");
		printf("\n");
	
	}
	return 0;
}
