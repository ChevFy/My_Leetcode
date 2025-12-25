// #include <stdio.h>

// int	checkDuplicates(int *nums, int numsSize, int val, int index)
// {
// 	for (int i = 0; i < numsSize; i++)
// 		if (nums[i] == val)
// 			return (1);
// 	return (0);
// }

int	removeDuplicates(int *nums, int numsSize)
{
	int	new_size;
	int	k;
	int	found_dup;

	k = 0;
	for (int i = 0; i < numsSize; i++)
	{
		found_dup = 0;
		for (int j = 0; j < i; j++)
		{
			if (nums[i] == nums[j])
			{
				found_dup = 1;
				break ;
			}
		}
		if (!found_dup)
			nums[k++] = nums[i];
	}
	// printf("%d\n", k);
	return (k);
}

// int	main(void)
// {
// 	int	size;
// 	int	arr[] = {3, 2, 2, 3, 4};
// 	int	*num;
// 	int	newsize;

// 	size = 5;
// 	num = arr;
// 	newsize = removeDuplicates(num, size);
// 	for (int i = 0; i < newsize; i++)
// 		printf("%d ", arr[i]);
// }
