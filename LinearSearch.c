#include <stdio.h>

// 순차 탐색 알고리즘 함수
int LSearch(int ar[], int len, int target)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i;         // 찾은 대상의 index 값 반환
	}
	return -1;                // 찾지 못했음을 의미하는 값 반환
}

int main(void)
{
	int arr[] = { 3, 5, 2, 4, 9 };
	int index;

	index = LSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (index == -1)
		printf("탐색 실패");
	else
		printf("탐색 저장 값: %d \n", index);

	index = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (index == -1)
		printf("탐색 실패");
	else
		printf("탐색 저장 값: %d \n", index);

	return 0;
}