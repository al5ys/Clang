#include<stdio.h>
/*
int sum(int a,int b,int c) {
	int hap = a + b + c;
	return hap;
}
*/
//����1�Լ�
void makeevenarray(int* arr, int size) {
	int num = 0;
	for (int i = 0; i < size; i++) {
		arr[i] = num;
		num += 2;
	}
}
//����2�Լ�
void printarraywithsize(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d��°�� %d�Դϴ�.\n", i, arr[i]);
	}
}
//����3 �Լ�
void changeindex2(int* arr, int index, int num) {
	arr[index] = num;
}
/*
int makeEvenArray(int* arr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d", arr[i]);
		}
	}
	printf("\n");
	return;

}
int printArrayWithSize(int* arr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	return;
}
int changeIndex(int* arr, int index, int num) {
	
	printf("�ٲٰ� ���� �ε��� ��ġ �������� : ");
	scanf_s("%d", &index);

	printf("�ٲٰ� ���� �ε������� ���� �������� : ");
	scanf_s("%d", &num);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	
}
*/
int main() {
	//
	/*
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int hap = ;
	*/
	/*
	int arr[10];
	
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
				
	}
	makeEvenArray(&arr,10);
	*/
	//������ Ǯ�� ����1
	int arr[10];
	makeevenarray(arr, 10);
	printarraywithsize(arr, 10);
	changeindex2(arr, 10,3000);
	

	/*
	int arr2[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d ", &arr2[i]);
	}

	printArrayWithSize(&arr2, 10);
	
	int arr3[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d ", &arr3[i]);
	}
	int index = 0;
	int num = 0;
	changeIndex(&arr3, index, num);
	*/
	return 0;
}