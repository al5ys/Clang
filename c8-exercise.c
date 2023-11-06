#include<stdio.h>

int main()
{
	/*
	//문제1 
	int score;
	printf("시험점수를 입력하세요 : ");
	scanf_s("%d", &score);
	if ((91 <= score) && (score <= 100))
		printf("A 학점\n");
	else if ((81 <= score) && (score <= 90))
		printf("B 학점\n");
	else if ((71 <= score) && (score <= 80))
		printf("C 학점\n");
	else if ((61 <= score) && (score <= 70))
		printf("D 학점\n");
	else if ((51 <= score) && (score <= 60))
		printf("E 학점\n");
	else if ((0 <= score) && (score <= 50))
		printf("F 학점\n");
	else printf("\n");
	*/
	
	//문제2
	/*
	int a,num1;
	printf("양의 정수를 입력하세요 : ");
	scanf_s("%d", &num1);
	printf(" { ");
	for (a = 1; a <= num1; a++) {
		//이런 방법도 있다. 
		//if (a > num1 / 2) {
		//	printf("%d", num1);
		//	break;
		//}
		
		
		if (num1 % a == 0) printf("%d ",a);

	}
	printf(" } ");
	*/

	//문제3
	int b;
	printf("자연수를 입력하세요 : ");
	scanf_s("%d", &b);
	for (int a = 1; a <= b; a++) {
		if (a % 10 == 3) printf("* ");
		else if (a % 10 == 6) printf("* ");
		else if (a % 10 == 9) printf("* ");
		else printf("%d ", a);
	}
	


	return 0;
}