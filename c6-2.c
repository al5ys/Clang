#include <Stdio.h>

int main()
{
	
	//����1 ������ ��Ÿ���� ���� ������ �Է¹޾� �������� ������� ����ϴ� ���α׷� 
	//1.������ 4�� ������ �����̴�.
	//2.1�� ������ �����ص� 100���� ������ �������� ����̴�.
	//3.2�� ������ �����ص� 400���� ������ �������� �����̴�.
	//ex. 2016 ���� 2017 ���
	/*
	int year;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);
	*/
	/*
	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 == 0) printf("%d -> ����", year);
		else if (year % 100 == 0) printf("%d -> ���", year);
		else printf("%d -> ����", year);

	}
	else printf("%d -> ���",year);
	*/
	//int divisibleBy4 = year%4==0;
	//int notDivisibleBy100 = year%100!=0;
	//int divisibleBy400=year%400==0;
	//int isLeapYear=((divisibleBy4&&notDivisibleBy100)||divisibleBy400)
	//if(isLeapYear) printf("%d�⵵�� �����Դϴ�.",year);
	//else printf("%d�⵵�� ����Դϴ�.",year);
	/*
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d�⵵�� �����Դϴ�.", year);
	}
	else printf("%d�⵵�� ����Դϴ�.", year);
	*/

	//����2 ������ ������ Ÿ������ 1~3������ ������ ������ �ݾ��� ������ �Է¹ް� ������ �����̸���
	//�Ž������� ����ϴ� ���α׷� �ۼ�
	//1.�Ƹ޸�ī�� 500�� ��400�� ����Ƽ 300��
	//2.
	int bv, money;
	printf("���Ḧ �����ϼ��� : ");
	scanf_s("%d", &bv);
	printf("������ �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &money);

	int pr;
	
	switch (bv) {
	case 1:
		pr = 500;
		break;

	case 2:
		pr = 400;
		break;
	case 3:
		pr = 300;
		break;
	default:
		printf("�ش������ �����ϴ�.");
		break;
	}
	if (money < pr) {
		printf("�ݾ��� �����մϴ�.");
		
	}
	
	int change = money - pr;
	int five = change / 500;
	int hundred = (change % 500) / 100;
	switch(bv){
	case 1:
		printf("�Ƹ޸�ī�� / �ܵ� : 500�� :%d�� , 100�� : %d��", five, hundred);
		break;
	case 2:
		printf("�� / �ܵ� : 500�� :%d�� , 100�� : %d��", five, hundred);
		break;
	case 3:
		printf("����Ƽ / �ܵ� : 500�� :%d�� , 100�� : %d��", five, hundred);
		break;
	}
	
		
	
	return 0;
}