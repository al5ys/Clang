#include<stdio.h>
#include<string.h>

int main() {
	char text[] = "abcdefghijk";
	char* p;
	//text[0]=='a' ,text[1]=='b' ,text==�ּҰ� 
	p = text;
	printf("%d\n", &text[1]);
	printf("%d", &p[1]);
	printf("%c", p[2]);
	int a;
	char b;
	printf("�ٲٰ� ���� �ڸ� �Է��غ����� : ");
	scanf_s("%d", &a);
	
	for (int i = 0; i < 11; i++) {
		if (i == a) {
			printf("���ιٲܷ�");
			getchar();
			scanf_s("%c", &b);
			text[a] = b;
		}
			
	}
	//�������� p[num]=a�� �����ϰ���.
	printf("%s",text);

	return 0;
}