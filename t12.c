/*
To reverse word in string
Ex. i/p = "hello hi"
o/p = "olleh ih"
*/

#include<stdio.h>
int main()
{
	int i=0, j=0;
	int end_of_str_flag = 0;
	int start_index, end_index;
	char str[100] = {0}, temp;
	printf("Enter a line : ");
	gets(str);
	for(i=0; *(str+i); ++i)
	{
		start_index = i;
		while(*(str + start_index) == ' ')
		{
			if(*(str + start_index) == '\0')
			{
				end_of_str_flag = 1;
				break;
			}
			++start_index;
		}
		if(end_of_str_flag)
			break;
		end_index = start_index + 1;
		while(*(str + end_index) != ' ' && *(str + end_index) != '\0')
			++end_index;
		end_index -= 1;
		i = end_index;
		for(j = 0; j <= (end_index - start_index)/2; ++j)
		{
			temp = *(str + start_index + j);
			*(str + start_index + j) = *(str + end_index - j);
			*(str + end_index - j) = temp;
		}
	}
	printf("String after reversing the words : %s \n", str);
	return 0;
}
