#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	/*
	int a = 10;
	int* ptr_a;
	ptr_a = &a;
	printf("&a = %d\n", &a);
	printf("ptr_a= %d\n", ptr_a);
	printf("&a+1 = %d\n", &a + 1);
	printf("&a+2 = %d\n", &a + 2);
	*/
	/*
	//����1
	char c1[100];
	char c2[100];
	
	//scanf_S��� scanf�� ����Ϸ��� 
	//#define _CRT_SECURE_NO_WARNINGS�� �� �־��.

	printf("c1�� ���ڿ��Է��ϼ��� : ");
	scanf_s("%s", c1, sizeof(c1));
	printf("c2�� ���ڿ��Է��ϼ��� : ");
	scanf_s(" %s", c2, sizeof(c2)); // ���� %s or getchar(); ->���Ͱ� c2�� ���°� ����.
	strcat(c1, c2);
	//= printf("%s\n",strcat(c1,c2));�� �ٷ� ���൵ �ȴ�.
	strcat(c1, "!");
	printf("%s\n", c1);

	char c3[100];
	
	//����2
	printf("������ �������� �ʴ� ���ڿ��� �Է��ϼ��� : ");
	
	scanf_s("%s", c3, sizeof(c3));
	
	int length = strlen(c3); //�Է� ���� ���ڿ��� ����.
	for (int i = 0; i < length; i++) {
		if (97 <= c3[i] && c3[i] <= 122)//=('a' <= c3[i] && c3[i] <= 'z')
			printf("%c", c3[i]);
	}
	*/
	

	
	return 0;	
}