#include<stdio.h>
/*
//plusfive��� �Լ��� ������.

//input[int a]�϶�� �ǹ�
int plusfive(int a) {

	return a + 5; //output [a+5]�϶�� �ǹ�.
}
//mint�� antiMint�Լ��� ��ǲ�ƿ�ǲ�̾��� �Լ��̴�.
void mint() {
	for (int i = 0; i < 30; i++)
		printf("���ʰ� ������ �����Ѵ�.\n");

}
void antiMint() {
	for (int i = 0; i < 30; i++)
		printf("ġ��� ���ݸ��� �� �Գ�?\n");

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
	//���ڸ� �Է¹ް�
	//change�Լ� �����ؼ�
	//10���� �ٲ� ����ϵ���.
	*a = 10;
	
}
*/
/*
void multiplyTen(int *a) {
	*a *= 10;
}
*/
int swap(int *a,int *b) {
	//�׻� �ڵ�� ������ �Ʒ� �쿡���·� �帥�ٰ� �����ض�.
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

	
	
}


int main() {
	//int num;
	/*
	printf("�ְ� ���� ���� ��: ");
	scanf_s("%d", &num);
	int k = plusfive(num);

	printf("�Լ��� ����� %d�̴�.", k);
	*/
	/*
	printf("���� �������ΰ���? �ƴϸ� �ݹ������ΰ���? �����ĸ� 1�� �ݹ����ĸ� 2��");
	scanf_s("%d", &num);
	if (num == 1)
		mint();
	else
		antiMint();
	*/
	/*
	int m, n;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &m, &n);
	getchar();

	int num2;
	int result;
	printf("�μ��� ���ұ��(1) �����(2)?");
	scanf_s("%d", &num2);
	if (num2 == 1)
		result = add(m, n);
	else
		result = subtract(m, n);

	printf("����� %d�Դϴ�.", result);
	*/
	/*
	int a;
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	//changeTen(&a);
	multiplyTen(&a);
	printf("%d\n", a);
	*/
	//int b = changeTen(a);
	//printf("����� ? %d", b);
	int a, b;
	scanf_s("%d %d", &a, &b);
	
	printf("a��%d , b�� %d\n", a, b);
	
	swap(&a, &b);
	printf("a��%d , b�� %d", a, b);
		return 0;
}

