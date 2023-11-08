#include<stdio.h>

int main()
{
	/*
	//교재 95p-7
	int a, b, c;
	printf("자연수 입력 : ");
	scanf_s("%d", &a);
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= 2*b-1; c += 2) {
			
			printf("%d ", c);
		}
		printf("\n");
	}
	*/
	/*
	//교재 95p-8
	int a, b, c;
	printf("자연수 입력 : ");
	scanf_s("%d", &a);
	for (b=1;b<=a;b++) {
		for (c=1;c<=2*b-1;c++) {
			printf("%d ", c);
		}
		printf("\n");
	}
	
	//문제1 유저에게 정수를 입력을 받아 구구단을 출력하는 프로그램 만드세요.
	int num1, a, b;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num1);
	for (a=1;a<=9;a++) {
		printf("%d * %d = %d\n", num1, a, num1 * a);
	}

	//문제 2 2이상의 정수를 입력받아서 n의정수에 따라 n의 길이를 가진 정사각형을 만드세요

	int num2, num3;
	
	printf("정수를 입력 하세요 : ");
	scanf_s("%d", &num2);
	for (num3=1;num3<=num2;num3++) {
		for (int num4=1;num4<=num2;num4++) {
			printf("*");
		}
		printf("\n");
	}
	*/
	/*
	//배열:매우 많은 변수들을 일일히 선언할 수 없으니
	//효율적으로 쓰기위해 고안된 것.
	//배열의 초기화
	int megaCoffee[5] = { 2000,3000,4000,6000,1000 };
	// 단 , int megaCoffe[5];
	//megaCoffe={2000,3000,4000,6000,1000};은 불가.
	//한번에 써라.
	//변수는 되지만 배열은 안된다.
	
	//대괄호 안의 숫자 없이 중괄호 안의 내용만 채워준다면 
	//자동으로 알아서 배열의 칸 개수가 인식된다.
	int ventiCoffee[] = { 1000,2000,3000,4000,5000,6000 };
	//->대괄호 안에 숫자 6이 없어도 6으로 인식된 상태.
	*/
	
	int megab1;
	printf("메가 붕어빵메뉴의 개수를 입력하세요 : ");
	scanf_s("%d", &megab1);

	int megab2[1000];
	for (int a = 0; a < megab1; a++) {
		printf("메가 붕어빵메뉴의 가격을 입력하세요 : ");
		scanf_s("%d", &megab2[a]);
	}

	for (int a=0;a<megab1;a++) {
		printf("%d번째 붕어빵메뉴의 가격은 %d원 입니다.", a, megab2[a]);
	}


	

	
	
	return 0;
}