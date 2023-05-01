//To print given string in reverse order without doing any chnage in original string
#include<stdio.h>

int main()
{
	char str[50] = {0};
	int len = 0;
	printf ("Enter string :");
	scanf ("%s", str);
	while (*(str + len))
		++len;

	for (len-- ; len>=0 ; len--)
		printf("%c", *(str + len));
	printf("\n");
	return 0;
}
