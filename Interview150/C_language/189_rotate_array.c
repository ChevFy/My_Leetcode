#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void	rotate(int *nums, int numsSize, int k)
{
	k %= numsSize;
	for (int i = 0; i < numsSize / 2; i++)
		swap(&nums[i], &nums[numsSize - i - 1]);
	for (int i = 0; i < k / 2; i++)
		swap(&nums[i], &nums[k - 1 - i]);
	for (int i = k; i < k + (numsSize - k) / 2; i++)
		swap(&nums[i], &nums[numsSize - 1 - (i - k)]);
}

int	main(void)
{
	int arr[2] = {1, 2};
	int *ptr = arr;

	rotate(ptr, 2, 3);

	for (int i = 0; i < 2; i++)
		printf("%d ", arr[i]);
}