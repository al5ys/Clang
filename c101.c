#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>	




int main()
{
	/* 
	//���ڿ� �迭�� �� ������ĭ�� null�̴ϱ� �������. ����?
	char s[3];
	printf("�� �Էµ� �غ��Ŷ�~ ");
	scanf_s("%s", s, sizeof(s));
	printf("%s", s);


	int arr[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}

	printf("%d", arr[1][1]);
	*/
	//�迭�� ������ �޸� �ּҸ� ������.
	//�迭���� ������ �� ����.
	//ex.int arr1[2]={1,2,3};
	//int arr2=arr1; ->�Ұ�.
	//2�����迭 ���� :�� -> n������Ʈ
	//2�����迭 ����	 �� -> ����(nxxx��)
	/*
	//1.���ڿ�(�ϳ��� �ܾ�)
	//���ڿ� c������ datatype���� ���ڸ� �ǹ��ϴ�
	//char�� �����ϸ�,���ڿ�(��������)�� ����ϱ� ���ؼ���
	//charŸ���� ���ڿ��迭�� ����ϼž��մϴ�.
	char str[6] = "Hello";
	//charŸ���� �迭������ �� ������ĭ�� null(='\0'=0);
	//={'h','e','l','l','o',0(='\0')};
	printf("%s\n", str);
	printf("%c\n", str[1]);
	
	for (int i = 0; i < 6; i++) {
		printf("%c", str[i]);
	}
	//���� for���� �̿��Ͽ� %c�� �ϳ��ϳ� �޴°�
	//printf("%s\n", str); �� �ѹ���� ���� �ǹ�.

	//2.�����ܾ� ���ڿ�
	char str2[100] = "welcome to c-language";
	printf("%s", str2);
	*/
	/*
	//3.�Է¹��� ���ڿ�
	//>>���ڿ��� �Է��Ҷ� 
	//	���Ⱑ �ȵǴ� ������ ���ĸ�
	//	scanf�� ����� ���б� ����.
	// %s�� ���ڿ��θ�ŭ ������� �ѹ���
	//���������� ģ �ܾ������ �ν��Ѵ�.
	//����� , �ϵ��ڵ����� ģ�� ����� �νİ�����
	
	char str3[1000];
	scanf_s("%s", str3, sizeof(str3));
	printf("%s", str3);	
	*/
	/*
	//4.�����ܾ �Է�(�� �ܾ����� �˰� �ִ� ���)
	//ex.hello my name is junkyu
	//->{{hello},{my},{name},{is},{junkyu}}
	//= �̰� �� ��ǻ� ���߹迭�� ����
	char inputStr[5][10];
	printf("�Է��ϼ���~~ ���ڿ� 5���");
	for (int i = 0; i < 5; i++) {
		scanf_s("%s", inputStr[i], sizeof(inputStr[i]));
	}
	for (int i = 0; i < 5; i++) {
		printf("%s ", inputStr[i]);
	}
	*/
	/*
	//#include<string.h>�� ���.
	
	char input2[100][100];
	printf("�Է� : ");
	scanf_s("%s", input2, sizeof(input2));
	//scanf_s("ǥ���ڸ�",����,ũ�Ⱚ ����);
	printf("%s", input2);
	*/

	
	//char str1[10] = "hello"; //{hello00000
	//int num=sizeof(str1) / sizeof(char)-1;
	//printf("%d",num);
	//�� ���� null������ char 1ĭ�� 1����Ʈ x10ĭ
	//= total 10�� ���´�. �ű�ٰ� -1������ 9������.
	/*
	int num2 = strlen(str1);//string length
	//�̸�();=�Լ�,�޼ҵ�:"�����ϰ� �ϴ� ��"
	printf("%d", num2);
	//�̷��� string length�Լ� strlen�� ����ϸ�
	//�� 10ĭ������ ��ȿ������ ����ִ� ���ڿ� ������ŭ
	//�뷮�� ����.

	//char str[10]="hihellowordlclang";
	//�̷��� �س����� ����� ��������������
	//���������� ��Ű�� �����ȴ�.
	//���, �̷��� ��������.
	*/
	/*
	//2.string copy

	char str1[100] = "hello world!!!!!!!";
	char str_copy[100];
	//strcpy(copyVar, originVar);	
	strcpy(str_copy, str1);
	printf("%s \n", str_copy);
	
	*/
	/*
	//strncpy(); //string copy with number
	char str3[100] = "hello world~~!!!!!!!";
	char str_copy2[100];
	strncpy(str_copy2,str3 , sizeof(str_copy2));
	printf("%s\n", str_copy2);
	printf("%c%c", str_copy2[2],str_copy2[3]);
	*/
/*
char originT[] = "today is ";
char week[10];
printf("���� : ");
scanf("%s", week);
strcat(originT,week);//string concatenation
//�����ʿ� �ִ°� �������� ��ġ�� ���.
printf("%s\n", originT);
printf("%s %s \n",originT, week);
*/
/*
//��
char txt1[] = "text";
char txt2[] = "test";
if (txt1 == txt2) {
	printf("���� ���Դϴ�.");
}
else printf("�ٸ� ���Դϴ�.");
//�Ѵ� �Ȱ��� text��� ���� �ߴµ���
//�� ���� �ٸ��ٰ� ���°ɱ�?
//���ڰ� ���ٰ��ؼ� �� ���� ���� ���ٰ�
//�� �� ����������.
//ex.���� ȸ�� �������� �����뷮 ����������
//�޴����� 2�����ִµ� �� 2���� ���� ������ X

//��, �迭�� �Ҵ�� �ּҵ����ִµ�
//���� �ٸ� �ּҿ� ���� ���ڸ� ����־���������
//�� 2���� ���� ������ �ƴ�. ���� �ٸ� �ּ�.
//��ġ Ȯ�뿡�� Ȯ������Ҷ� ���� ������ ����
//���� �ٸ��ɷ� ����ϴ� ����.
//strcmp(txt1,txt2); ->
int result = strcmp(txt1, txt2); //-1,0,1
printf("%d\n", result);
switch (result) {
case -1:
	printf("�տ� ����� ������ �켱");
	break;
case 0:
	printf("���� ���� ���� ����.");
	break;
case 1:
	printf("�ڿ� ����� ������ �켱");
	break;
default:
	return 0;
}
*/

//<������>
//&�� �� �ּ��̴�.
//�迭�ǰ����� ������ ��� �ּҿ� �����.
//ex.����123������ �����̳� ���̶��
//���࿡ ����123������ yh123�̶�� �ϰ� �����̳� ���� hs����Ѵٸ�
//int* hs=&yh123; or int *hs=&yh123; or int hs*=&yh123;
// ���� �������ִ� �ּҿ� ���� ��Ī,�ּҸ� ����Ű�� ��Ī�� ���� ����. ������
//���� *�� 1.���ϱ⿬���� ���� 2.�����ͼ����ǿ��� 3.��� ��.(=printf("%d",*hs);
//���� 1.�׳� ���� ��� �� or 2.�ּ���ġ
//*&�� ���� ���̾��� ���Ǽ� ���� ���� �ȴ�.




return 0;
}