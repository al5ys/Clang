#include <stdio.h>

// //,/**/�� �ּ�(=comment)�̴�.
//�̷��� �ҽ��ڵ带 2���� ����� �ϳ� ������ �ȵǴ� ������ ��Ʈ���� 2���̱⶧��. 
// ���� ���ϰ����ϴ� �ҽ��ڵ� ��Ŭ��-> �Ӽ�->���忡�� ����->�� �ϸ� �ȴ�.

int main()
{
	//������ ��������� ����غ���.
	//ū ����ǥ �ȿ� ���� �� ���ڿ� ����Ѵ�. ���� ��ȿ���� ������ ������ �Ϸ��� �ٸ������ ����Ѵ�.
	//���α׷����� ��� �� ���� �����Ѱ� �� �̷��ԵǴ°��� ���� ���ε� �׳� �ܿ�� ���߿� �� �˰Եȴ�.
	//���� ����ϱ�: %d(=decimal) -> �������o,�������x
	/*f("%d %d\n", 1021, 233);
	printf("123 + 345 = %d\n",123+345);
		
	//����(=form)
	//ex.%d(���� ���)  
	//	 %f(�Ǽ� ���) %.2f %.3f %.?f(�Ҽ��� ���� ��/��/?�ڸ����� ���) 
	printf("%.3f\n", 1.0144);
	//���ĺ� ���� �ϳ� %c
	printf("%c\n", 'k');
	//%c�� �������ٿ��� �幮���ε� ����
	printf("%c%c%c\n%c%c%c",'s', 'b', 's', 'k', 'b', 's');
	//%s�� ���ڿ� 
	printf("%s", "�ұ� �Ҹ�����");*/

	//���� :printf�� ����ؼ� ����غ���.
	//1.12345+98765 = %d(�ٹٲ�)
	printf("12345 + 98765 = %d\n", 12345 + 98765);
	//2.megastudy ����ϱ�(%s�� ����Ͽ�)
	printf("%s\n", "megastudy");
	//3.������ ���� �Ҽ� 3��°���� ���(%.?f)
	printf("%.3f\n", 3.141);
	//4.TGIF ����ϱ�(%c)
	printf("%c%c%c%c\n", 'T', 'G', 'I', 'F');
	
	


	//return�� 
	//�� ���α׷��� �����ϴ� ���ɾ��. 
	//���� 0�� ��ȯ�Ѵ�. "�� ���ư���. ���� �� �ƴپ��̿�."
	//0(���� ����) 1(������ ����)
	return 0;
}