#include <stdio.h>

int main()
{
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);//scanf는 꼭 &를 붙이세요., scanf만쓰면 에러뜬다. 따라서 scanf_s를 써라.
	printf("%d %d", a, b);
	printf("\n%d", a + b);
	/
	int a, b;
	int c;
	char d;
	//enter도 문자다. 따라서 엔터를 눌렀을 때 엔터값이 입력받은 문자로 오해될 수가 있어서 엔터쳐도 ㄱㅊ다는 의미로
	// get char();를 넣어주라는 거다. 아니면 %c뒤에 빈값을 넣던지.
	//1.%c 뒤에 빈 값을 넣기
	//or 2. getchar();를 넣어주기.
	scanf_s("%d%d", &a,&b);
	
	scanf_s("%d", &b);
	getchar();
	scanf_s("%d", &c);
	getchar();
	scanf_s("%c ", &d);
	//getchar();
	
	
	printf("두 수의 합은 %d입니다.\n", a + b);
	printf("두 수의 차는 %d입니다.\n", a - b);
	printf("두 수의 곱은 %d입니다.\n", a * b);
	printf("두 수의 나눗셈의 몫은 %d입니다.\n", a / b);
	printf("%c",d);
	*/
	/*
	int a;
	printf("당신의 키를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("당신의 키는 %dcm 이군요", a);
	*/
	/*
	int a, b, c;
	printf("당신이 지금까지 일을 한 개월 수를 입력하세요 : ");
	scanf_s("%d", &a);
	getchar();
	printf("당신의 현재 월급을 입력하세요(단위 :만원) : ");
	scanf_s("%d", &b);
	c = b * (31 * a / 365);
	printf("당신의 퇴직금은 %d만원 수령 가능합니다.", c);
	*/
	/*
	//알파벳 소문자 입력(a~z) 
	//결과를 출력할때 아스키코드를 이용해서 출력해보기.
	char a;
	printf("알파벳을 입력하세요 : ");
	scanf_s("%c",&a);
	printf("%c 알파벳은 %d번째 입니다.", a, a-96);
	printf("%c",107 );
	printf("\n%d", '[');
	*/
	/*
	//A~Z
	//정수입력(1~26)
	//%d번째의 알파벳은 %c입니다!
	int a;
	printf("정수 입력 : ");
	scanf_s("%d", &a);
	printf("%d번째의 알파벳은 %c입니다.", a,a+64);
	*/
	/*
	//소문자 알파벳 입력
	//대문자 알파벳 출력
	char a;
	printf("소문자 알파벳을 입력하세요 : ");
	scanf_s("%c", &a);
	printf("%c알파벳의 대문자는 %c입니다.", a, a-32);
	
	printf("\n%d", a);
	printf("\n%c", 55);
	*/

	//1번퀴즈 : 총 세 상품의 가격을 입력받고 세 상품의 가격의 합을 출력해보자.
	int a, b, c;
	printf("첫번째 상품의 가격을 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 상품의 가격을 입력하세요 : ");
	scanf_s("%d", &b);
	printf("세번째 상품의 가격을 입력하세요 : ");
	scanf_s("%d", &c);
	printf("세 상품의 가격의 총 합은 %d원입니다.\n",a+b+c);
	//2번퀴즈 : 가로와 세로를 입력 받고 사각형의 넓이를 출력하시오.
	int x, y;
	printf("가로의 길이를 입력하세요 : ");
	scanf_s("%d", &x);
	printf("세로의 길이를 입력하세요 : ");
	scanf_s("%d", &y);
	printf("사각형의 넓이는 %d입니다.\n", x * y);
	//3번 :bmi=체중/키*키
	//체중 키입력 bmi출력
	int weight, height;
	printf("체중을 입력하시오 : ");
	scanf_s("%d", &weight);
	printf("키를 입력하시오 : ");
	scanf_s("%d", &height);
	printf("당신의 bmi는 %f입니다.", (float)weight / height * height);
	return 0;
}