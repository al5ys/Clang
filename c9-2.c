#include<stdio.h>

int main() {
	/*
	int megab1;
	printf("�ؾ�޴��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &megab1);

	int megab2[1000];
	for (int a = 0; a < megab1; a++) {
		printf("%d��° �ް� �ؾ�޴��� ������ �Է��ϼ��� : ",a+1);
		scanf_s("%d", &megab2[a]);
	}

	for (int a = 0; a < megab1; a++) {
		printf("%d��° �ؾ�޴��� ������ %d�� �Դϴ�.\n", a+1, megab2[a]);
	}
	
	printf("�����ϼ̽��ϴ�.\n");
	*/
	/*
	int coffee1;
	printf("Ŀ�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &coffee1);

	int coffee2[1000];
	for (int a = 0; a < coffee1; a++) {
		printf("%d��° Ŀ���� ������ �Է��ϼ��� : ",a+1);
		scanf_s("%d", &coffee2[a]);
	}
	int max = coffee2[0];
	for (int a = 0; a < coffee1; a++) {
		if (max <= coffee2[a])
			max = coffee2[a];
		
	}
	printf("���� ��� Ŀ���� ������ %d�� �Դϴ�.\n", max);
	*/
	
	//<�������迭>
	//mxn�� ���̴�. �ַ�, 2���������� 3�����̻��� �������� 
	//�����ϼ���.

	//int starbucks[3][3];
	//1�� = Ŀ�Ƿ�
	//2�� = ��Ŀ�Ƿ�
	//3�� = Ƽ��
	/*
	char menu[3] = { "Ŀ��","��Ŀ��","Ƽ" };
	printf("Ŀ�Ƿ��� ���ݵ��� �Է��ϼ��� : \n");
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			printf("%d��°��  %d������ �Է��ϼ���", b + 1,menu[a]);
			scanf_s("%d", &starbucks[a][b]);
		}
		
		
	}
	*/
	/*
	for (int a = 0; a < 3; a++) {
		if (a == 0) printf("Ŀ�Ƿ��� ������ �Է��ϼ���\n");
		else if (a == 1) printf("��Ŀ�Ƿ��� ������ �Է��ϼ���\n");
		else printf("Ƽ���� ������ �Է��ϼ���\n"); 
		for (int b = 0; b < 3; b++)
		{
			if (a == 0) printf("%d��°�� Ŀ�Ǹ� �Է��ϼ���\n", b);
			else if (a== 1) printf("%d��°�� ��Ŀ�Ǹ� �Է��ϼ���\n", b);
			else printf("%d��°�� Ƽ�� �Է��ϼ���\n", b);
			scanf_s("%d", &starbucks[a][b]);
		}



	}
	*/
	/*
	char coffee[] = "americano";
	printf("���� ���޿��� ���� ���� ���� Ŀ�Ǵ� %c�̴�.\n", coffee[2]);
	printf("���� ���޿��� ���� ���� ���� Ŀ�Ǵ� %s�̴�.\n", coffee);
	//null�� ����� �ٽ��ѹ� �˾ƺ���.
	char coffee2[] = "a\0mericano";
	printf("���� ���޿��� ���� ���� ���� Ŀ�Ǵ� %s�̴�.\n", coffee2);
	//�迭 ���� �Ϻ� �����ϱ�.
	coffee[8] = 'a';
	printf("���� ���޿��� ���� ���� ���� Ŀ�Ǵ� %s�̴�.\n", coffee);
	*/
	
	char coffee[100];
	printf("����� �����ϴ� Ŀ��! ");
	//���ڹ迭���� scanf�� �� , &�� �Ⱥ��δ�.
	scanf_s("%s", coffee, sizeof(coffee));
	printf("����� ���� ���� ���� �� Ŀ�Ǵ� %s�̴�.", coffee);
	//����� �����ϴ� Ŀ�Ǹ� ����ϼ���.
	//1.americano
	//2.latte
	//3.deca
	//4.tea
	//����� �����ϴ� Ŀ�Ǵ� ~�̱���. ���� �ϳ���.
	int a;
	printf("����� �����ϴ� Ŀ�Ǹ� ����ϼ���\n");
	printf("1.americano\n");
	printf("2.latte\n");
	printf("3.deca\n");
	printf("4.tea\n");
	scanf_s("%d", &a);

	//printf("����� �����ϴ� Ŀ�Ǵ� %s");

	return 0;
}