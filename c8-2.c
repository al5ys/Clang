#include<stdio.h>

int main()
{	
	//for�� ��ȭ : �ΰ��̻��� ����
	//����for���� �ϳ��� ����� �ݺ��ϴ�.
	/*
	int a;
	for (a=0;a<10;a+=1)
	{
		for (int b=0;b<a;b+=1) {
			printf("%d ", b);
		}
		printf(":%d��°��  \n",a);
	}
	
	int b = 0;
	switch (b) {
	case 0:
		printf("�ȳ�?");
		break; //������ ����
	case 1:
		printf("�ȳ�!");
		break;

	}
	*/
	/*
	int k;
	printf("1.�Ա��̿ýô�\n2.�۱��̿ýô�\n3.�����̿ýô�.\n");
	for (int i=0;;i++)
	{
		scanf_s("%d", &k);
		if (i == 0) {
			continue;//�ǳʶٱ� ����.
			printf("�Ա�\n");
		}
		else if (i == 1) {
			printf("�۱�\n");
		}
		else if (i == 2) {
			printf("����\n");
			break;//���� ����.
		}
		else printf("�ٽ��Է�\n");
	}
	*/
	/*
	int inputN;
	printf("1.�Ա�\n2.�۱�\n3.����\n");
	for (int i = 0;; i++) {
		
		int j = (i % 3);//3���� �������� ���� ������ �� �ľ�.
		if (j == 0) {
			continue; //�ǳʶٱ�
		}
		else if (i > 500) {
			break; //����������
		}
		else printf("%d ",i);
	}
	*/
	//����1
	int credit;
	printf("���������� �Է��ϼ��� : ");
	scanf_s("%d", &credit);
	if ((91 <= credit) && (credit <= 100))
		printf("A ����\n");
	else if ((81 <= credit) && (credit <= 90))
		printf("B ����\n");
	else if ((71 <= credit) && (credit <= 80))
		printf("C ����\n");
	else if ((61 <= credit) && (credit <= 70))
		printf("D ����\n");
	else if ((51 <= credit) && (credit <= 60))
		printf("E ����\n");
	else if ((0 <= credit) && (credit <= 50))
		printf("F ����\n");
	else printf("\n");


	
	


	return 0;
}