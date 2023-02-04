#include <stdio.h>

int BinarySearch(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last)
		return -1;
	mid = (first + last) / 2;

	if (ar[mid] == target)
		return mid;
	else if (target < ar[mid])
		return BinarySearch(ar, first, mid - 1, target);
	else
		return BinarySearch(ar, mid + 1, last, target);
}

int main(void)
{
	int ar[] = { 1, 3, 5, 7, 9 };
	int index;

	index = BinarySearch(ar, 0, sizeof(ar) / sizeof(0) - 1, 7);
	if (index == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", index);

	index = BinarySearch(ar, 0, sizeof(ar) / sizeof(0) - 1, 6);
	if (index == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", index);
	return 0;
}