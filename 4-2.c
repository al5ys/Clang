#include <stdio.h>

int main()
{
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);//scanf�� �� &�� ���̼���., scanf������ �������. ���� scanf_s�� ���.
	printf("%d %d", a, b);
	printf("\n%d", a + b);
	/
	int a, b;
	int c;
	char d;
	//enter�� ���ڴ�. ���� ���͸� ������ �� ���Ͱ��� �Է¹��� ���ڷ� ���ص� ���� �־ �����ĵ� �����ٴ� �ǹ̷�
	// get char();�� �־��ֶ�� �Ŵ�. �ƴϸ� %c�ڿ� ���� �ִ���.
	//1.%c �ڿ� �� ���� �ֱ�
	//or 2. getchar();�� �־��ֱ�.
	scanf_s("%d%d", &a,&b);
	
	scanf_s("%d", &b);
	getchar();
	scanf_s("%d", &c);
	getchar();
	scanf_s("%c ", &d);
	//getchar();
	
	
	printf("�� ���� ���� %d�Դϴ�.\n", a + b);
	printf("�� ���� ���� %d�Դϴ�.\n", a - b);
	printf("�� ���� ���� %d�Դϴ�.\n", a * b);
	printf("�� ���� �������� ���� %d�Դϴ�.\n", a / b);
	printf("%c",d);
	*/
	/*
	int a;
	printf("����� Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� Ű�� %dcm �̱���", a);
	*/
	/*
	int a, b, c;
	printf("����� ���ݱ��� ���� �� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	getchar();
	printf("����� ���� ������ �Է��ϼ���(���� :����) : ");
	scanf_s("%d", &b);
	c = b * (31 * a / 365);
	printf("����� �������� %d���� ���� �����մϴ�.", c);
	*/
	/*
	//���ĺ� �ҹ��� �Է�(a~z) 
	//����� ����Ҷ� �ƽ�Ű�ڵ带 �̿��ؼ� ����غ���.
	char a;
	printf("���ĺ��� �Է��ϼ��� : ");
	scanf_s("%c",&a);
	printf("%c ���ĺ��� %d��° �Դϴ�.", a, a-96);
	printf("%c",107 );
	printf("\n%d", '[');
	*/
	/*
	//A~Z
	//�����Է�(1~26)
	//%d��°�� ���ĺ��� %c�Դϴ�!
	int a;
	printf("���� �Է� : ");
	scanf_s("%d", &a);
	printf("%d��°�� ���ĺ��� %c�Դϴ�.", a,a+64);
	*/
	/*
	//�ҹ��� ���ĺ� �Է�
	//�빮�� ���ĺ� ���
	char a;
	printf("�ҹ��� ���ĺ��� �Է��ϼ��� : ");
	scanf_s("%c", &a);
	printf("%c���ĺ��� �빮�ڴ� %c�Դϴ�.", a, a-32);
	
	printf("\n%d", a);
	printf("\n%c", 55);
	*/

	//1������ : �� �� ��ǰ�� ������ �Է¹ް� �� ��ǰ�� ������ ���� ����غ���.
	int a, b, c;
	printf("ù��° ��ǰ�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ��ǰ�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("����° ��ǰ�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &c);
	printf("�� ��ǰ�� ������ �� ���� %d���Դϴ�.\n",a+b+c);
	//2������ : ���ο� ���θ� �Է� �ް� �簢���� ���̸� ����Ͻÿ�.
	int x, y;
	printf("������ ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &x);
	printf("������ ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &y);
	printf("�簢���� ���̴� %d�Դϴ�.\n", x * y);
	//3�� :bmi=ü��/Ű*Ű
	//ü�� Ű�Է� bmi���
	int weight, height;
	printf("ü���� �Է��Ͻÿ� : ");
	scanf_s("%d", &weight);
	printf("Ű�� �Է��Ͻÿ� : ");
	scanf_s("%d", &height);
	printf("����� bmi�� %f�Դϴ�.", (float)weight / height * height);
	return 0;
}