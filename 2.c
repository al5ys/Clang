#include<stdio.h>

int main()
{
	/*
	int k;
	scanf_s("%d", &k);
	if (k >= 0) //if�� �߰�ȣ ���� �鿩����� �ٷ� �� ���ٱ�����
		printf("��� or 0\n");
	printf("�����ϼ̽��ϴ�.");
	*/
	//����1
	/*
	int num1;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	if (num1 >= 40) {
		printf("����� �ǳ�Ȱ�� �ϼ���. ");
	}
	else if (num1 >= 0) {
		printf("�����ϴ� �ǿ�Ȱ�� �ϼ���.");
	}
	else {
		printf("�߿�� �ǳ�Ȱ�� �ϼ���. ");
	}
	*/
	/*
	//����2
	//5�������� �Է¹޾Ƽ� ����� ������ ���� ���ϴ� ���α׷�
	int a, b, c, d, e;
	printf("���� 5�� �Է��ϼ��� : ");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int sum = 0; //int sum=0
	if (a > 0)
		sum += a;
	if (b > 0)
		sum += b; //sum+=b;
	if (c > 0)
		sum += c; //sum+=c;
	if (d > 0)
		sum += d; //sum+=d;
	if (e > 0)
		sum += e; //sum+=e;
	printf("����� ������ ������ %d�Դϴ�.\n", sum);
	*/
	
	//����3
	char f;
	scanf_s("%c", &f);
	if(f>=97&&f<=122)
		printf("%c", (f-32));
	else if (f >= 65 && f <= 90)
		printf("%c", (f + 32));
	else {
		printf("none");
	}
	
	//����4 
	//3���� ������ �Է¹޾� �ִ� �ּڰ� ���
	


	
	return 0;
}