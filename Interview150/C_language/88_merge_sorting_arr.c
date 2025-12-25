#include <stdio.h>
#include <stdlib.h>

void	BubbleSort(int *arr, int n)
{
	int	swapped;
	int	temp;

	for (int i = 0; i < n - 1; i++)
	{
		swapped = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = 1;
			}
		}
		if (swapped == 0)
			break ;
	}
}

void	merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
	for (int i = 0; i < n; i++)
	{
		nums1[m + i] = nums2[i];
	}
	BubbleSort(nums1, m + n);
}
// int	main(void)
// {
// 	int	arr[5] = {1, 0, 3, 4, -99};
// 	int	nums2[5] = {2, 4, 6, 7, 8};
// 	int	m = 3, n;

// 	BubbleSort(arr, 5);
// 	printf("Sorted arr: ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// 	int nums1[8] = {1, 3, 5, 0, 0, 0, 0, 0}; // m = 3, n = 5
// 	m = 3, n = 5;
// 	merge(nums1, 8, m, nums2, 5, n);
// 	// แสดงผลลัพธ์หลัง merge (ถ้าคุณแก้ merge ให้ copy กลับ nums1 ด้วย)
// 	printf("Merged nums1: ");
// 	for (int i = 0; i < m + n; i++)
// 		printf("%d ", nums1[i]);
// 	printf("\n");
// 	return (0);
// }
