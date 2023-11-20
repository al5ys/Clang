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
	//문제1
	char c1[100];
	char c2[100];
	
	//scanf_S대신 scanf를 사용하려면 
	//#define _CRT_SECURE_NO_WARNINGS를 써 넣어라.

	printf("c1의 문자열입력하세요 : ");
	scanf_s("%s", c1, sizeof(c1));
	printf("c2의 문자열입력하세요 : ");
	scanf_s(" %s", c2, sizeof(c2)); // 띄어쓰고 %s or getchar(); ->엔터가 c2에 들어가는거 방지.
	strcat(c1, c2);
	//= printf("%s\n",strcat(c1,c2));로 바로 써줘도 된다.
	strcat(c1, "!");
	printf("%s\n", c1);

	char c3[100];
	
	//문제2
	printf("공백을 포함하지 않는 문자열을 입력하세요 : ");
	
	scanf_s("%s", c3, sizeof(c3));
	
	int length = strlen(c3); //입력 받은 문자열의 길이.
	for (int i = 0; i < length; i++) {
		if (97 <= c3[i] && c3[i] <= 122)//=('a' <= c3[i] && c3[i] <= 'z')
			printf("%c", c3[i]);
	}
	*/
	

	
	return 0;	
}