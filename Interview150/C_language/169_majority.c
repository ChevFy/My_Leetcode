#include <stdio.h>

int	majorityElement(int *nums, int numsSize)
{
	int count = 0;
	int candidate ;

	for (int i = 0 ; i < numsSize ; i++)
	{
		if(count == 0)
		{
			candidate = nums[i];
			count++;
		}
		else if (candidate == nums[i])
			count++;
		else	
			count--;
	}
	return candidate;
}
// int main()
// {
// 	int size;
// 	int arr[] = {3, 2, 3};
// 	int *num;
// 	int newsize;

// 	size = 3;
// 	num = arr;
// 	int newSize = majorityElement(num, size);
// 	printf("%d ", newSize);
// 	return 0;
// }