#include <stdio.h>

int main()
{
	/*
	//�� ������ �Է¹޾Ƽ� ũ������� ����� �غ���.
	int a, b, c;
	printf("���� 3���� �Է��غ����� : ");
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
	
	printf("�����ϼ̽��ϴ�.");
	*/
	
	//����1 2���� ���� ���� m,n�� �Է¹޾� �� ���� �������� ��� ���
	//�������谡 �ƴϸ� none / n,m�� ��Ұ���� �𸥴�.
	//ex. 4 2 -> 2^2\4 / 3 9 -> 3*3=9 / 4 3 ->none
	/*
	int n, m;
	printf("�� ���� ������ �Է��� ������ : ");
	scanf_s("%d %d", &n, &m);
	if (m == n * n) printf("%d * %d = %d\n", n, n, m);
	else if (n == m * m) printf("%d * %d = %d\n", m, m, n);
	else printf("None\n");
	//�������� ���̽��� ����Ͽ� ���� if�ڵ带 ������.
	if (n <= 0 || n <= 0) {
		printf("���� ������ �Է����� �ʾҽ��ϴ�.");
	}
	
	//����2 3���� ������ �Է� �ް� , �ִ񰪰� �ּڰ��� ����ϴ� ���α׷�
	//ex.2 3 4 -> 4 2 / 3 2 1->3 1
	int a, b, c;
	printf("�� ���� ������ �Է��� ������ : ");
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
	//����2�� ������ �ڵ�
	//�������� ���� max�� min�� ���� ����Ŵ��� if�� ���� ����� ����Ȳ�� ���� max= , min= �� �Ҵ��� ���̴ּ�.
	//max�� min 2������ ����� �ѹ��� �Ȱ��� �����ϴٸ� �����ϰ� 2���� ��������Ÿ�Ϸ� ����.
	//�״��� �������� printf("�ִ� :%d , �ּڰ� :%d",max,min); �̷��� ����� �Ͻ�.

	
	//(�����)����3 ������ ������ �Է¹޾� 
	//1.91.5�̻� A 85.5�̻�B 80.5�̻� C���
	//2.3������ �ϳ��� 100���� ������ GOOD���
	//3.4������ �ϳ��� 60�� �̸��� ������ BAD���
	//4.��,������ good bad���� ��� �����Ҽ�����.

	float d, e, f;
	printf("���� ���� ������ ������ �Է��ϼ��� : ");
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
	//switch���̶�? switch���� if���� ���� �����ϰ� 
	char k;
	scanf_s("%c", &k);
	switch (k) {
	case 'a':
		printf("�ȳ�!");
		break; //�ʼ�
	case 'b':
		printf("������!");
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
	printf("��ȣ�� �־��ּ��� : (1~4��)");
	scanf_s("%d", &number);
	switch (number) {
	case 1:
		printf("�ý��� ����");
		break;
	case 2:
		printf("�ý��� ����");
		break;
	case 3:
		printf("�ý��� ����");
		break;
	case 4:
		printf("�ý��� ����");
		break;
	default:
		printf("�ý��� ����");
		break;
	}
	*/
	//���� switch���� �̿��Ͽ� �ش���� �Է� �� 
	//3~5���� ���Դϴ�. �Ѱ�������
	//6~8���� �����Դϴ�. �Ѱ����ż� ġ���Ͻ���.
	//9~11���� �����Դϴ�. �̺ҿ� ��ð� ��Ʃ�� ������ ����
	//12~2���� �ܿ��Դϴ�. �̺ҿ� ��ð� ���� ������ ����
	//�׿ܴ� �ش� ������ �����~!!
	int l;
	printf("�ش� ���� �Է��ϼ��� ~ !!   ");
	scanf_s("%d", &l);
	switch (l) {
	case 3:case 4:case 5: //�̷��� �ѹ��� �ص� �ȴ�. ���ü�Ȯ���� �־� ����.
		printf("�Ѱ����� ������ �Ͻ��� ������");
		break;
	case 6:case 7:case 8:
		printf("�Ѱ����ż� ġ���Ͻ��� ������");
		break;
	case 9:
		printf("�̺ҿ� ��ð� ��Ʃ�� ������ ����");
		break;
	case 10:
		printf("�̺ҿ� ��ð� ��Ʃ�� ������ ����");
		break;
	case 11:
		printf("�̺ҿ� ��ð� ��Ʃ�� ������ ����");
		break;
	case 12:
		printf("�̺ҿ� ��ð� ���� ������ ����");
		break;
	case 1:
		printf("�̺ҿ� ��ð� ���� ������ ����");
		break;
	case 2:
		printf("�̺ҿ� ��ð� ���� ������ ����");
		break;
	default:
		printf("�ش� ������ �����ϴ� ~!!!");
		break;
	}
	int a;
	printf("���� �ϳ� �Է��غ����� : ");
	scanf_s("%d", &a);
	switch (a) {
	case
	}






	

	return 0;
}