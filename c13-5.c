#include<stdio.h>

void printSystemManual() {
	printf("1.Ŀ���Ǹ��ϱ�\n");
	printf("2.Ŀ�ǵ���ϱ�\n");
	printf("3.Ŀ�ǻ����ϱ�\n");
	printf("4.����Ŀ���Ǹŷ� �� ���� Ȯ���ϱ�\n");
	printf("5.�ý��� ����\n");
	printf("�ý��� ��ȣ�� �Է����ּ���.\n");
}
typedef	struct ediya {
	char menu[50];
	int price;
	int shot;
	int cal;
}ediya2;
void selcof() {
	for (int i = 0; i < 3; i++) {
		printf("%d��° Ŀ�Ǵ� %s�̰� ������ %d�Դϴ�.\n", i, a[i].menu, a[i].price);
	}
	int select;
	printf("Ŀ�Ǹ� �����ϼ��� : ");
	scanf_s("%d", &select);
	cofpri();
}
void cofpri() {
	
	printf("������ %d�Դϴ�.", a[select].price);
	income += a[select].price;
}

int main() {
	int systemCode;

	ediya2 a[20] = { 
		{ "ice americano",4500,2,10 } ,
		{ "latte",5000,2,250 },
		{ "vanilla latte",5500,2,350 } 
	};

	int income = 0;
	do {
		printSystemManual();
		scanf_s("%d", &systemCode);
		switch (systemCode) {
			case 1:
				selcof();
				printf("������ %d�Դϴ�.", a[select].price);
				income += a[select].price;
				break;
			case 4:
				printf("���� ������� %d�Դϴ�.\n", income);
				break;
		}
		
		
		
	} while (systemCode != 5);
	printf("�ý��� �����մϴ�...Have a Good Day\n");
	return 0;
}