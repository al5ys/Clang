	#include<stdio.h> //ǥ�� �����

	
	int main()
	{
		/*
		//���� �ڷ���
		int a = 5;
		int b = 3;
		int add = a + b;
		int sub = a - b;
		int mul = a * b;
		int div = a / b; // ������ ���� ��
		int rem = a % b;//������ ���� ������
		printf("%d + %d =%d\n", a, b, add);
		printf("%d - %d =%d \n", a, b, sub);
		printf("%d * %d =%d \n", a, b, mul);
		printf("%d / %d =%d \n", a, b, div);
		printf("%d % %d =%d \n", a, b, rem);
		*/
		/*	
		//�Ǽ� �ڷ���
		float c; //���� �ʱ�ȭ�� ���������� �ǹ̾��� �����Ⱚ�� �����Ǿ��ִ�.
		float d;
		c = 3.14;//���࿡ �������� ������ ���� �ö������� ������ �� ���̴�. ��? c�� d�� ���� ���� �����̾ȵǼ�.
		d = 9.8;//���α׷��� ���� ������ �Ʒ��� �������� ��������.
		float add2 = c + d;
		float sub2 = c - d;
		float mul2 = c * d;
		float div2 = c / d;
		//float rem2 = c % d; //�Ǽ��������� �������� �ȸ��� ������������ �������� ����.
	

		printf("%f + %f = %f\n", c, d, add2);
		printf("%f - %f = %f\n", c, d, sub2);
		printf("%f * %f = %f\n", c, d, mul2);
		printf("%f / %f = %f\n", c, d, div2);
		//printf("%f % %f = %f\n", d, c, rem2);
		*/
		/*
		printf("%d\n", sizeof(double));
		int a = 90, b = 95, c = 96;
		int d = a + b + c;
		double avg = (double)d / 3; 
		//����ȯ�̶�? ������ �ڷ����� ���� �������� �ǵ�ġ ���� ��� �����°� ��ġ���� �߰��������� ��ȣ��
		//����Ͽ� ����ȯ�� ���� �� �ְ� �����ִ� ��ġ.
		printf("%f", avg);
		*/
		printf("%c%c%c%c", 77, 69, 71, 65);
		printf("\n%c%c%c%c", 109, 101, 103, 97);
		printf("%d", 'a');

		//������.
		int a = 5;
		a = 3;
		a = 7;
		a = a + 3; //a=a+3 �� �� a+=3.
		a += 3; // a+=3�� �� a=a+3.
		//����������
		int b = 5;
		printf("%d\n", b); //5
		printf("%d\n", b++);//�̰� �ϴ� b�� ����ϰ� ��� �� ���ο����� ���Ŀ� 1���ϴ°�.
		printf("%d\n", b);//���� ���⼭�� 6�̵Ǵ°�.
		printf("%d\n", ++b);//�̰� +�� �̸� �ؼ� ����϶�°�. ���� b++������ 6���� ��µǰ� ���ο����� 7�̵Ǿ�
		//������ ���⼭�� 1�� ���� ���ϰ� ������༭ ����� 7��� ��.
			
		//�񱳿�����
		//c���� ���:���̸� 1 ���̾ƴϸ� 0
		printf("%d\n", 5< 3);
		printf("%d\n", 5 != 3);
		return 0;
	}







