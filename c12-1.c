#include<stdio.h>
#include<string.h>

int main() {
	char text[] = "abcdefghijk";
	char* p;
	//text[0]=='a' ,text[1]=='b' ,text==주소값 
	p = text;
	printf("%d\n", &text[1]);
	printf("%d", &p[1]);
	printf("%c", p[2]);
	int a;
	char b;
	printf("바꾸고 싶은 자리 입력해보세요 : ");
	scanf_s("%d", &a);
	
	for (int i = 0; i < 11; i++) {
		if (i == a) {
			printf("뭘로바꿀래");
			getchar();
			scanf_s("%c", &b);
			text[a] = b;
		}
			
	}
	//선생님은 p[num]=a로 간단하게함.
	printf("%s",text);

	return 0;
}