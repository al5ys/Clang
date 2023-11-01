#include <stdio.h>

int main()
{
	/*
	//세 정수를 입력받아서 크기순으로 출력을 해보자.
	int a, b, c;
	printf("정수 3개를 입력해보세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) printf("a , b , c\n");
		else if (a > c) printf("a , c , b\n");
		else printf("c , a , b\n");
	}
	else {
		if (a > c) printf("b , a , c\n");
		else if (b > c) printf("b , c , a\n");
		else printf("c , b , a\n");
	}
	
	printf("수고하셨습니다.");
	*/
	
	//문제1 2개의 양의 정수 m,n을 입력받아 두 수의 제곱관계 어떤지 출력
	//제곱관계가 아니면 none / n,m의 대소관계는 모른다.
	//ex. 4 2 -> 2^2\4 / 3 9 -> 3*3=9 / 4 3 ->none
	/*
	int n, m;
	printf("두 양의 정수를 입력해 보세요 : ");
	scanf_s("%d %d", &n, &m);
	if (m == n * n) printf("%d * %d = %d\n", n, n, m);
	else if (n == m * m) printf("%d * %d = %d\n", m, m, n);
	else printf("None\n");
	//여집합의 케이스도 고려하여 밑의 if코드를 쳐주자.
	if (n <= 0 || n <= 0) {
		printf("양의 정수를 입력하지 않았습니다.");
	}
	
	//문제2 3개의 정수를 입력 받고 , 최댓값과 최솟값을 출력하는 프로그램
	//ex.2 3 4 -> 4 2 / 3 2 1->3 1
	int a, b, c;
	printf("세 개의 정수를 입력해 보세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) printf("%d %d\n", a, c);
		else if(c>a) printf("%d %d\n", c, b);
		else printf("%d %d\n", a, b);
		
	}
	else if (c > b) printf("%d %d\n", c, a);
	else {
		if (a > c) printf("%d %d\n", b, c);
		else printf("%d %d\n", b, a);
	}
	//문제2의 선생님 코드
	//선생님은 변수 max와 min을 따로 만드신다음 if에 대한 경우의 수상황에 따라 max= , min= 로 할당을 해주셨다.
	//max와 min 2가지로 나누어서 한번에 안가고 무식하다면 무식하게 2가지 수형도스타일로 가심.
	//그다음 마지막에 printf("최댓값 :%d , 최솟값 :%d",max,min); 이렇게 출력을 하심.

	
	//(어려움)문제3 국영수 점수를 입력받아 
	//1.91.5이상 A 85.5이상B 80.5이상 C출력
	//2.3과목중 하나라도 100점이 있으면 GOOD출력
	//3.4과목중 하나라도 60점 미만이 있으면 BAD출력
	//4.즉,학점과 good bad세개 모두 존재할수있음.

	float d, e, f;
	printf("국어 영어 수학의 점수를 입력하세요 : ");
	scanf_s("%f %f %f", &d, &e, &f);
	if (d >= 91.5)
		printf("A ");
	if (d == 100) printf("Good ");
	else if (d >= 85.5) printf("B ");
	else if (d >= 80.5) printf("C ");
	else if (d >= 60) printf("");
	else printf("Bad ");
	if (e >= 91.5)
		printf("A ");
	if (e == 100) printf("Good ");
	else if (e >= 85.5) printf("B ");
	else if (e >= 80.5) printf("C ");
	else if (e >= 60) printf("");
	else printf("Bad ");

	if (f>= 91.5)
		printf("A ");
	if (f == 100) printf("Good ");
	else if (f >= 85.5) printf("B ");
	else if (f >= 80.5) printf("C ");
	else if (f >= 60) printf("");
	else printf("Bad ");
*/
	/*
	//switch문이란? switch문은 if문을 아주 간단하게 
	char k;
	scanf_s("%c", &k);
	switch (k) {
	case 'a':
		printf("안녕!");
		break; //필수
	case 'b':
		printf("곤니찌와!");
		break;
	case 'c':
		printf("Hello!");
		break;
	default:
		printf("Perfect!");
		break;
	}
	*/
	/*
	int number;
	printf("번호를 넣어주세요 : (1~4번)");
	scanf_s("%d", &number);
	switch (number) {
	case 1:
		printf("시스템 시작");
		break;
	case 2:
		printf("시스템 설정");
		break;
	case 3:
		printf("시스템 절전");
		break;
	case 4:
		printf("시스템 종료");
		break;
	default:
		printf("시스템 에러");
		break;
	}
	*/
	//문제 switch문을 이용하여 해당월을 입력 후 
	//3~5월은 봄입니다. 한강가시죠
	//6~8월은 여름입니다. 한강가셔서 치맥하시죠.
	//9~11월은 가을입니다. 이불에 계시고 유튜브 보시죠 ㅎㅎ
	//12~2월은 겨울입니다. 이불에 계시고 넷플 보시죠 ㅎㅎ
	//그외는 해당 계절이 없어요~!!
	int l;
	printf("해당 월을 입력하세요 ~ !!   ");
	scanf_s("%d", &l);
	switch (l) {
	case 3:case 4:case 5: //이렇게 한번에 해도 된다. 가시성확보에 있어 좋다.
		printf("한강가서 나들이 하시죠 ㅎㅎㅎ");
		break;
	case 6:case 7:case 8:
		printf("한강가셔서 치맥하시죠 ㅎㅎㅎ");
		break;
	case 9:
		printf("이불에 계시고 유튜브 보시죠 ㅎㅎ");
		break;
	case 10:
		printf("이불에 계시고 유튜브 보시죠 ㅎㅎ");
		break;
	case 11:
		printf("이불에 계시고 유튜브 보시죠 ㅎㅎ");
		break;
	case 12:
		printf("이불에 계시고 넷플 보시죠 ㅎㅎ");
		break;
	case 1:
		printf("이불에 계시고 넷플 보시죠 ㅎㅎ");
		break;
	case 2:
		printf("이불에 계시고 넷플 보시죠 ㅎㅎ");
		break;
	default:
		printf("해당 계절은 없습니다 ~!!!");
		break;
	}
	int a;
	printf("숫자 하나 입력해보세요 : ");
	scanf_s("%d", &a);
	switch (a) {
	case
	}






	

	return 0;
}