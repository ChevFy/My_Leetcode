#include <stdio.h>
#include <stdlib.h>

int	removeElement(int *nums, int numsSize, int val)
{
	int k  = 0;
	for (int i = 0; i < numsSize; i++)
		if (nums[i] != val)
			nums[k++] =  nums[i];
	return k;
}	

// int	main(void)
// {
// 	int size = 4;
// 	int arr[] = { 3, 2, 2, 3};
// 	int *num = arr;
	
// 	int newsize = removeElement(num , 4 , 3);

// 	for(int i = 0 ; i < newsize ; i++)
// 		printf("%d ", arr[i]);

// }
