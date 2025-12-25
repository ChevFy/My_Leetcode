#include <stdio.h>

void	insertionSort(int *nums, int numsSize)
{
	int	key;
	int	temp;
	int	j;

	for (int i = 1; i < numsSize; i++)
	{
		key = nums[i];
		j = i - 1;
		while (j >= 0 && nums[j] > key)
		{
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = key;
	}
}

int	removeDuplicates(int *nums, int numsSize)
{
	if(numsSize <= 2)
		return numsSize;
	insertionSort(nums,numsSize);
	int k = 2;
	for(int i = 2 ; i < numsSize ; i++)
	{
		if(nums[i] != nums[k-2])
			nums[k++] = nums[i];
	}
	return k;
}

// int	main(void)
// {
// 	int size;
// 	int arr[] = {0, 0, 0, 2, 2, 1, 2, 3};
// 	int *num;
// 	int newsize;

// 	size = 8;
// 	num = arr;
// 	int newSize = removeDuplicates(num, size);
// 	for (int i = 0; i < newSize; i++)
// 		printf("%d ", arr[i]);
// }