#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;

	while (first <= last)
	{
		mid = (last + first) / 2;

		if (target == arr[mid])
		{
			return mid;
		}
		else
		{
			if (target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
		opCount += 1;
	}
	printf("ºñ±³¿¬»êÈ½¼ö: %d \n", opCount);
	return -1;
}

int main(void) {
	int arr1[500] = {0,};
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int index;

	index = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (index == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", index);

	index = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
	if (index == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", index);

	index = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
	if (index == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", index);

	return 0;
}
