#include<stdio.h>

int main()
{
	/*
	int k;
	scanf_s("%d", &k);
	if (k >= 0) //if문 중괄호 없이 들여쓸경우 바로 밑 한줄까지만
		printf("양수 or 0\n");
	printf("수고하셨습니다.");
	*/
	//퀴즈1
	/*
	int num1;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num1);
	if (num1 >= 40) {
		printf("더우니 실내활동 하세요. ");
	}
	else if (num1 >= 0) {
		printf("쾌적하니 실외활동 하세요.");
	}
	else {
		printf("추우니 실내활동 하세요. ");
	}
	*/
	/*
	//퀴즈2
	//5개정수를 입력받아서 양수인 수들의 합을 구하는 프로그램
	int a, b, c, d, e;
	printf("숫자 5개 입력하세요 : ");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int sum = 0; //int sum=0
	if (a > 0)
		sum += a;
	if (b > 0)
		sum += b; //sum+=b;
	if (c > 0)
		sum += c; //sum+=c;
	if (d > 0)
		sum += d; //sum+=d;
	if (e > 0)
		sum += e; //sum+=e;
	printf("양수인 수들의 총합은 %d입니다.\n", sum);
	*/
	
	//퀴즈3
	char f;
	scanf_s("%c", &f);
	if(f>=97&&f<=122)
		printf("%c", (f-32));
	else if (f >= 65 && f <= 90)
		printf("%c", (f + 32));
	else {
		printf("none");
	}
	
	//퀴즈4 
	//3개의 정수를 입력받아 최댓값 최솟값 출력
	


	
	return 0;
}