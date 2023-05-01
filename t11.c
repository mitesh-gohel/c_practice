//To find that how many duplicate element are ther in array of 6 element
// 6 elements = {1,2,3,1,3,1}

#include<stdio.h>
#define NUM_OF_ELE 6
int main()
{
	int arr[NUM_OF_ELE] = {0};
	int i=0, j=0;
	int count = 0;
	printf("Enter %d elemets of array : ",NUM_OF_ELE);
	for(i=0; i < NUM_OF_ELE; ++i)
		scanf("%d", arr+i);
	for(i=0; i < NUM_OF_ELE; ++i)
	{
		count = 0;
		for(j=0; j<i; ++j)
			if(*(arr+i) == *(arr+j))
				break;
		if(i==j)	//means, didn't break froim above for loop
			for(j=i+1; j < NUM_OF_ELE; ++j)
				if(*(arr+i) == *(arr+j))
					++count;
			if(count)
				printf("There are %d duplicates of %d \n", count, *(arr+i));
	}
	return 0;
}
