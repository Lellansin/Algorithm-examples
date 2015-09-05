/*
 * Selection sort
 *
 * @author  lellansin <lellansin@qq.com>
 * @website http://www.lellansin.com
 */
#include <stdio.h>

void sort(int a[], int length);
void swap(int *a, int *b);

/*
 * 选择排序
 *
 * @param int[] [in out]  arr  要处理的数组
 * @param int   [in]      len  要处理的数组长度
 */
void sort(int a[], int length)
{
	int i, j;
	int tmp;
	int min;

	for ( i = 0; i < length - 1; i ++ )
	{
		min = i;

		for ( j = i + 1; j < length; j ++ )
		{
			if (a[min] > a[j])
			{
				min = j;
			}

			if ( min != i )
			{
				swap(&a[i], &a[min]);
			}
		}
	}

}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
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

	return 0;
}

