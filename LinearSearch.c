#include <stdio.h>

// ���� Ž�� �˰��� �Լ�
int LSearch(int ar[], int len, int target)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i;         // ã�� ����� index �� ��ȯ
	}
	return -1;                // ã�� �������� �ǹ��ϴ� �� ��ȯ
}

int main(void)
{
	int arr[] = { 3, 5, 2, 4, 9 };
	int index;

	index = LSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (index == -1)
		printf("Ž�� ����");
	else
		printf("Ž�� ���� ��: %d \n", index);

	index = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (index == -1)
		printf("Ž�� ����");
	else
		printf("Ž�� ���� ��: %d \n", index);

	return 0;
}