#include <stdio.h>

int main()
{
	/*
	//�����ڷ��� int
	int a;
	// =�� ��ǻ�Ϳ��� ���ٰ� �ƴ� �Ҵ��Ѵٴ� �ǹ�.
	a = 3;
	printf("%d\n", a);

	a = 123; //a�� 3�� �Ҵ�Ǿ������� 123���� ���Ҵ�.
	printf("%d\n", a);
	===================================================
	int a, b, c;
	a = 1, b = 2, c = a + b;
	printf("%d\n", c);
	//���� ��� ��Ģ.
	//���� ��ҹ���,_ ��� ���� �ٸ� ���ڰ� �� �� ����.
	//����� (�̹� ������� C����� �����ܾ��. int, float ,return,���)�� ���������� ��� �Ұ�.

	//������ ���� �̸� ���� : �ҹ��ڽ���
	//int id;
	//int height;
	//�� �ܾ� �̻� ��������...
	// (1)int appStore; -> ��Ÿ(camel)ǥ���
	// (2)int app_store; ->��(snake) ǥ���	
	// ex.��Ÿ:int howManyPeopleInThere; ��:int how_many_people_in_there
	*/
	int x, y;
	x = 1; 
	y = 3;
	printf("%d%d%d%d%d\n",x,x,x,x,x);
	printf("%d   %d\n", x,x);
	printf("%d%d%d%d%d\n", x, x, x, x, x);
	printf("%d%d%d%d%d\n", y, y, y, y, y);
	printf("%d   %d\n", y, y);
	printf("%d%d%d%d%d\n", y, y, y, y, y);


	return 0;
}