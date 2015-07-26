#include <stdio.h>

/*
 * 冒泡排序
 *
 * 参数1  arr  输入输出参数  要处理的数组
 * 参数2  len  输出参数      要出里的数组长度
 */
void sort(int arr[], int len)
{
	int tmp;
	int i = len, j;	

	for ( ; i > 0; i-- )
	{
		for ( j = 0; j < i - 1; j++ )
		{
			if ( arr[j] > arr[j + 1] )
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 6, 8, 15, 4, 16, 9, 12 };
	int i, length = sizeof(arr) / sizeof(int);

	sort(arr, length);

	for ( i = 0; i < length; i++ )
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

