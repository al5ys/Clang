#include<stdio.h>

int main()
{
	/*
	//����1 
	int score;
	printf("���������� �Է��ϼ��� : ");
	scanf_s("%d", &score);
	if ((91 <= score) && (score <= 100))
		printf("A ����\n");
	else if ((81 <= score) && (score <= 90))
		printf("B ����\n");
	else if ((71 <= score) && (score <= 80))
		printf("C ����\n");
	else if ((61 <= score) && (score <= 70))
		printf("D ����\n");
	else if ((51 <= score) && (score <= 60))
		printf("E ����\n");
	else if ((0 <= score) && (score <= 50))
		printf("F ����\n");
	else printf("\n");
	*/
	
	//����2
	/*
	int a,num1;
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	printf(" { ");
	for (a = 1; a <= num1; a++) {
		//�̷� ����� �ִ�. 
		//if (a > num1 / 2) {
		//	printf("%d", num1);
		//	break;
		//}
		
		
		if (num1 % a == 0) printf("%d ",a);

	}
	printf(" } ");
	*/

	//����3
	int b;
	printf("�ڿ����� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	for (int a = 1; a <= b; a++) {
		if (a % 10 == 3) printf("* ");
		else if (a % 10 == 6) printf("* ");
		else if (a % 10 == 9) printf("* ");
		else printf("%d ", a);
	}
	


	return 0;
}