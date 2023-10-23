	#include<stdio.h> //표준 입출력

	
	int main()
	{
		/*
		//정수 자료형
		int a = 5;
		int b = 3;
		int add = a + b;
		int sub = a - b;
		int mul = a * b;
		int div = a / b; // 나눴을 때의 몫
		int rem = a % b;//나눴을 때의 나머지
		printf("%d + %d =%d\n", a, b, add);
		printf("%d - %d =%d \n", a, b, sub);
		printf("%d * %d =%d \n", a, b, mul);
		printf("%d / %d =%d \n", a, b, div);
		printf("%d % %d =%d \n", a, b, rem);
		*/
		/*	
		//실수 자료형
		float c; //변수 초기화를 안해줬으니 의미없는 쓰레기값이 설정되어있다.
		float d;
		c = 3.14;//만약에 가감승제 연산이 먼저 올라가있으면 에러가 뜰 것이다. 왜? c와 d에 대한 값이 설정이안되서.
		d = 9.8;//프로그래밍 언어는 위에서 아래로 수직으로 내려간다.
		float add2 = c + d;
		float sub2 = c - d;
		float mul2 = c * d;
		float div2 = c / d;
		//float rem2 = c % d; //실수형에서는 나머지가 안먹힘 정수형에서만 나머지가 나옴.
	

		printf("%f + %f = %f\n", c, d, add2);
		printf("%f - %f = %f\n", c, d, sub2);
		printf("%f * %f = %f\n", c, d, mul2);
		printf("%f / %f = %f\n", c, d, div2);
		//printf("%f % %f = %f\n", d, c, rem2);
		*/
		/*
		printf("%d\n", sizeof(double));
		int a = 90, b = 95, c = 96;
		int d = a + b + c;
		double avg = (double)d / 3; 
		//형변환이란? 엇갈린 자료형에 대한 연산결과가 의도치 않은 대로 나오는걸 고치고자 중간과정에서 괄호를
		//사용하여 형변환을 해줄 수 있게 도와주는 장치.
		printf("%f", avg);
		*/
		printf("%c%c%c%c", 77, 69, 71, 65);
		printf("\n%c%c%c%c", 109, 101, 103, 97);
		printf("%d", 'a');

		//연산자.
		int a = 5;
		a = 3;
		a = 7;
		a = a + 3; //a=a+3 이 곧 a+=3.
		a += 3; // a+=3이 곧 a=a+3.
		//증감연산자
		int b = 5;
		printf("%d\n", b); //5
		printf("%d\n", b++);//이건 일단 b를 출력하고 출력 후 내부에서만 이후에 1더하는거.
		printf("%d\n", b);//따라서 여기서는 6이되는거.
		printf("%d\n", ++b);//이건 +를 미리 해서 출력하라는것. 따라서 b++였으면 6으로 출력되고 내부에서만 7이되었
		//겠지만 여기서는 1을 먼저 더하고 출력해줘서 결과는 7기될 것.
			
		//비교연산자
		//c언어에서 약속:참이면 1 참이아니면 0
		printf("%d\n", 5< 3);
		printf("%d\n", 5 != 3);
		return 0;
	}







