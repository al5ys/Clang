#include<stdio.h>
int main() {
	//기본 반복문에는 while문 , for문이 있다.
	//while문 : while(조건){
	//						코드
	// 
	//					   }
	//"조건에 위배될 때 까지 코드를 반복한다"
	//while (1 == 1) {
	//	printf("안녕? \n");
	//} //고로, 이 while문은 무한정 반복한다. 왜? 1==1은 절대참이니까.
	/*
	int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++; // i++ == i=i+1
	}
	printf("%d\n", i);
	*/
	/*
	int a,b;

	printf("숫자 하나를 기입하시오 : ");
	scanf_s("%d", &a);
	b = 1;
	while (b <= a) {
		printf("%d\n", b);
		b++;
	}
	printf("프로그램 끝\n");
	*/
	/*
	int c, d;
	printf("숫자 하나를 입력하세요 : ");
	scanf_s("%d", &c);
	d = 1;
	while (d <= c) {
		if(d%2==0)
			printf("%d\n", d);
		d++;
	}
	int e;
	do {
		printf("제발 0을 입력하세요!\n");
		scanf_s("%d", &e);
	} while (e != 0);
	*/
	

	//1.프로그램 시작
	//2.프로그램 옵션보기
	//3.프로그램 절전모드
	//4.프로그램 종료
	//5.뒷번호 누르면 프로그램 만들기 싫다! 
	/*
	int f;
	do {
		printf("숫자 눌러보세요 : ");
		scanf_s("%d", &f);
		if (f == 1) printf("프로그램 시작\n");
		if (f == 2) printf("프로그램 옵션보기\n");
		if (f == 3) printf("프로그램 절전모드\n");
		if (f == 451) {
			printf("프로그램 만들기 싫다!\n");

			return 0;
		}

	} while (f != 4);
	printf("프로그램 종료.\n");
	*/
	/*
	//도형 넓이 구하는 프로그램
	//1.정삼각형 넓이 구하기
	//1-1)밑변과 높이를 입력하세요
	//1-2)정삼각형의 넓이는 ~다.
	// 
	//2.정사각형 넓이 구하기
	//2-1)한 변의 길이를 입력하세요
	//2-2)정사각형의 넓이는 ~다
	// 
	//3.원 넓이 구하기
	//3-1)반지름을 입력하세요
	//3-2)원의 넓이는 ~다
	//4.프로그램종료.
	int num0;
	int wid, hei;
	int wid2;
	float rad;
	//나는 do내부를 if문으로 했지만은 switch문으로 해도 좋을 것 같다.
	do {
		printf("1.정삼각형 넓이구하기\n2.정사각형 넓이 구하기\n3.원 넓이구하기\n4.프로그램 종료.\n");
		scanf_s("%d", &num0);
		
		if (num0 == 1) {
			printf("밑변과 높이를 입력하세요 : ");
			scanf_s("%d %d", &wid, &hei);
			printf("정삼각형의 넓이는 %d다.\n", wid * hei / 2);
		}
		if (num0 == 2) {
				printf("한변의 길이를 입력하세요 : ");
				scanf_s("%d", &wid2);
				printf("정사각형의 넓이는 %d다.\n", wid2*wid2);
		}
		if (num0 == 3) {
			printf("반지름을 입력하세요 : ");
			scanf_s("%f", &rad);
			printf("원의 넓이는 %.2f다.\n", rad * rad * 3.14);
		}
		
	} while (num0 != 4);
	printf("프로그램 종료!\n");
	*/

	//1.하나의 정수를 입력받고 정수의 약수들을 출력하기.
	//ex.4 -> 124	
	int l,m;
	m = 1;
	
	printf("정수를 입력하세요");
	scanf_s("%d", &l);
	do {
		if(l%m==0)
			printf("%d", m);
		m++;
	} while (m <= l);
	
	//2.하나의 정수를 입력하고 1~정수까지의 총 합을 출력하기
	//ex.4->10(1+2+3+4)
	int i = 1;
	int num;

	int sum = 0;
	printf("정수를 입력하세요");
	scanf_s("%d", &num);
	do {
		sum = sum + i;
		i++;
	} while (i <= num);
	printf("%d", sum);
	return 0;

}