#include<stdio.h>

int main()
{
	/*
	//���� 95p-7
	int a, b, c;
	printf("�ڿ��� �Է� : ");
	scanf_s("%d", &a);
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= 2*b-1; c += 2) {
			
			printf("%d ", c);
		}
		printf("\n");
	}
	*/
	/*
	//���� 95p-8
	int a, b, c;
	printf("�ڿ��� �Է� : ");
	scanf_s("%d", &a);
	for (b=1;b<=a;b++) {
		for (c=1;c<=2*b-1;c++) {
			printf("%d ", c);
		}
		printf("\n");
	}
	
	//����1 �������� ������ �Է��� �޾� �������� ����ϴ� ���α׷� ���弼��.
	int num1, a, b;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	for (a=1;a<=9;a++) {
		printf("%d * %d = %d\n", num1, a, num1 * a);
	}

	//���� 2 2�̻��� ������ �Է¹޾Ƽ� n�������� ���� n�� ���̸� ���� ���簢���� ���弼��

	int num2, num3;
	
	printf("������ �Է� �ϼ��� : ");
	scanf_s("%d", &num2);
	for (num3=1;num3<=num2;num3++) {
		for (int num4=1;num4<=num2;num4++) {
			printf("*");
		}
		printf("\n");
	}
	*/
	/*
	//�迭:�ſ� ���� �������� ������ ������ �� ������
	//ȿ�������� �������� ���ȵ� ��.
	//�迭�� �ʱ�ȭ
	int megaCoffee[5] = { 2000,3000,4000,6000,1000 };
	// �� , int megaCoffe[5];
	//megaCoffe={2000,3000,4000,6000,1000};�� �Ұ�.
	//�ѹ��� ���.
	//������ ������ �迭�� �ȵȴ�.
	
	//���ȣ ���� ���� ���� �߰�ȣ ���� ���븸 ä���شٸ� 
	//�ڵ����� �˾Ƽ� �迭�� ĭ ������ �νĵȴ�.
	int ventiCoffee[] = { 1000,2000,3000,4000,5000,6000 };
	//->���ȣ �ȿ� ���� 6�� ��� 6���� �νĵ� ����.
	*/
	
	int megab1;
	printf("�ް� �ؾ�޴��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &megab1);

	int megab2[1000];
	for (int a = 0; a < megab1; a++) {
		printf("�ް� �ؾ�޴��� ������ �Է��ϼ��� : ");
		scanf_s("%d", &megab2[a]);
	}

	for (int a=0;a<megab1;a++) {
		printf("%d��° �ؾ�޴��� ������ %d�� �Դϴ�.", a, megab2[a]);
	}


	

	
	
	return 0;
}