#include<stdio.h>
/*
//plusfive라는 함수를 만들어보자.

//input[int a]하라는 의미
int plusfive(int a) {

	return a + 5; //output [a+5]하라는 의미.
}
//mint와 antiMint함수는 인풋아웃풋이없는 함수이다.
void mint() {
	for (int i = 0; i < 30; i++)
		printf("민초가 세상을 지배한다.\n");

}
void antiMint() {
	for (int i = 0; i < 30; i++)
		printf("치약맛 초콜릿을 왜 먹냐?\n");

}
*/
/*
int add(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
*/
/*
int changeTen(int *a) {
	//숫자를 입력받고
	//change함수 실행해서
	//10으로 바꿔 출력하도록.
	*a = 10;
	
}
*/
/*
void multiplyTen(int *a) {
	*a *= 10;
}
*/
int swap(int *a,int *b) {
	//항상 코드는 위에서 아래 우에서좌로 흐른다고 생각해라.
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

	
	
}


int main() {
	//int num;
	/*
	printf("넣고 싶은 숫자 ㄱ: ");
	scanf_s("%d", &num);
	int k = plusfive(num);

	printf("함수의 결과는 %d이다.", k);
	*/
	/*
	printf("님은 민초파인가요? 아니면 반민초파인가요? 민초파면 1번 반민초파면 2번");
	scanf_s("%d", &num);
	if (num == 1)
		mint();
	else
		antiMint();
	*/
	/*
	int m, n;
	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &m, &n);
	getchar();

	int num2;
	int result;
	printf("두수를 더할까요(1) 뺄까요(2)?");
	scanf_s("%d", &num2);
	if (num2 == 1)
		result = add(m, n);
	else
		result = subtract(m, n);

	printf("결과는 %d입니다.", result);
	*/
	/*
	int a;
	printf("숫자 하나를 입력하세요 : ");
	scanf_s("%d", &a);
	//changeTen(&a);
	multiplyTen(&a);
	printf("%d\n", a);
	*/
	//int b = changeTen(a);
	//printf("결과는 ? %d", b);
	int a, b;
	scanf_s("%d %d", &a, &b);
	
	printf("a는%d , b는 %d\n", a, b);
	
	swap(&a, &b);
	printf("a는%d , b는 %d", a, b);
		return 0;
}

