/*
 * Insertion sort
 *
 * @author  lellansin <lellansin@qq.com>
 * @website http://www.lellansin.com
 */
#include <stdio.h>

void sort(int arr[], int length)
{
	int i = 0, j = 0;
	int tmp;

	for (i = 1; i < length; i++)
	{
		j = i;
		tmp = arr[i];

		while (j > 0 && tmp < arr[j - 1])
		{
			arr[j] = arr[j - 1];
			j--;
		}

		arr[j] = tmp;
	}
}

int main()
{
	int arr[] = {1, 6, 8, 15, 4, 16, 9, 12};
	int i;

	sort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
	getchar();
}
