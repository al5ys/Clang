#include<stdio.h>

//����ü ������ Ÿ�Ը����
typedef struct point {
	float x;
	float y;
}king; //struct point�� king�̶� �θ������ ��.
int main() {
	//�⺻���� ������Ÿ�Կܿ� ���� ���� ������Ÿ��
	//����ü�� ���������͸� �ϳ��� �׷����� ���� �� ���˴ϴ�.
	/*
	//ex1
	
	typedef int length; //int ��ſ� length�� �ϳ��� ������Ÿ�� �ڷ������� ����.
	length width = 11; //����(��)=11
	length height = 111;//����(����)=111
	length arr[3];
	arr[0] = 100;
	arr[1] = 200;
	arr[3] = 300;
	typedef float point[2]; // ������ point�� float�� �迭[2]ĭ�� ��Ÿ����.
	point k = { 1.5,3.3 }; //���� point[2]�� �Ƚᵵ �̹� point�� �� �ǹ̰� ����.
	//�׷��� ����ü�� �Ȱ����� ���Ϸ� ����ü������ �ϰڳ�

	point l[3]; // float l[3][2]
	*/
	struct point mega;
	// == king a;
	//a.x=1.3;
	//a.y=-1.4;
	//printf("%f %f",a.x,a.y);	
	mega.x = 1.4;
	mega.y = 2.2;
	printf("%f %f", mega.x, mega.y);

	return 0;
}