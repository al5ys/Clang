#include<stdio.h>

int main()
{	
	//for문 심화 : 두개이상의 조건
	//이중for문은 하나의 덩어리를 반복하는.
	/*
	int a;
	for (a=0;a<10;a+=1)
	{
		for (int b=0;b<a;b+=1) {
			printf("%d ", b);
		}
		printf(":%d번째줄  \n",a);
	}
	
	int b = 0;
	switch (b) {
	case 0:
		printf("안녕?");
		break; //제어의 역할
	case 1:
		printf("안녕!");
		break;

	}
	*/
	/*
	int k;
	printf("1.입금이올시다\n2.송금이올시다\n3.종료이올시다.\n");
	for (int i=0;;i++)
	{
		scanf_s("%d", &k);
		if (i == 0) {
			continue;//건너뛰기 역할.
			printf("입금\n");
		}
		else if (i == 1) {
			printf("송금\n");
		}
		else if (i == 2) {
			printf("종료\n");
			break;//끊는 역할.
		}
		else printf("다시입력\n");
	}
	*/
	/*
	int inputN;
	printf("1.입금\n2.송금\n3.종료\n");
	for (int i = 0;; i++) {
		
		int j = (i % 3);//3으로 나누었을 때의 나머지 값 파악.
		if (j == 0) {
			continue; //건너뛰기
		}
		else if (i > 500) {
			break; //빠져나가기
		}
		else printf("%d ",i);
	}
	*/
	//문제1
	int credit;
	printf("시험점수를 입력하세요 : ");
	scanf_s("%d", &credit);
	if ((91 <= credit) && (credit <= 100))
		printf("A 학점\n");
	else if ((81 <= credit) && (credit <= 90))
		printf("B 학점\n");
	else if ((71 <= credit) && (credit <= 80))
		printf("C 학점\n");
	else if ((61 <= credit) && (credit <= 70))
		printf("D 학점\n");
	else if ((51 <= credit) && (credit <= 60))
		printf("E 학점\n");
	else if ((0 <= credit) && (credit <= 50))
		printf("F 학점\n");
	else printf("\n");


	
	


	return 0;
}