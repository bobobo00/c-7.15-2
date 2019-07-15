#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void Find(int target ,int arr[3][3]){
	int i = 0;
	int j = 2;
	if (target > arr[2][2] || target < arr[0][0]){
		printf("Not Find!\n");
		return;
	}
	while (i < 3 && j < 3 && i>=0 && j>=0){
		if (target == arr[i][j]){
			printf("Find!\n");
			printf("第%d行，第%d列，值为：%d\n", i, j, arr[i][j]);
			return;
		}
		if (target>arr[i][j]){
		    i++;
		}
		if (target < arr[i][j]){
			j--;
		}
	}
	printf("Not Find!\n");
}

int main(){
	int array[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int num = 0;
	printf("请输入要查找的数字\n");
	scanf("%d", &num);
    Find(num, array);
	system("pause");
	return 0;
}