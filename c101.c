#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>	




int main()
{
	/* 
	//문자열 배열은 맨 마지막칸은 null이니까 비워놔라. ㅇㅋ?
	char s[3];
	printf("자 입력들 해보거라~ ");
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
	//배열은 별도의 메모리 주소를 가진다.
	//배열값은 복사할 수 없다.
	//ex.int arr1[2]={1,2,3};
	//int arr2=arr1; ->불가.
	//2차원배열 비유 :행 -> n차아파트
	//2차원배열 비유	 열 -> 동수(nxxx동)
	/*
	//1.문자열(하나의 단어)
	//문자열 c언어에서는 datatype에서 문자를 의미하는
	//char만 존재하며,문자열(여러글자)을 사용하기 위해서는
	//char타입의 문자열배열을 사용하셔야합니다.
	char str[6] = "Hello";
	//char타입의 배열에서는 맨 마지막칸은 null(='\0'=0);
	//={'h','e','l','l','o',0(='\0')};
	printf("%s\n", str);
	printf("%c\n", str[1]);
	
	for (int i = 0; i < 6; i++) {
		printf("%c", str[i]);
	}
	//위의 for문을 이용하여 %c로 하나하나 받는게
	//printf("%s\n", str); 이 한문장과 같은 의미.

	//2.여러단어 문자열
	char str2[100] = "welcome to c-language";
	printf("%s", str2);
	*/
	/*
	//3.입력받은 문자열
	//>>문자열을 입력할때 
	//	띄어쓰기가 안되는 이유가 뭐냐면
	//	scanf는 띄어쓰기는 못읽기 때문.
	// %s인 문자열인만큼 띄어쓰기없이 한번에
	//연속적으로 친 단어열까지만 인식한다.
	//참고로 , 하드코딩으로 친건 띄어쓰기로 인식가능함
	
	char str3[1000];
	scanf_s("%s", str3, sizeof(str3));
	printf("%s", str3);	
	*/
	/*
	//4.여러단어를 입력(몇 단어인지 알고 있는 경우)
	//ex.hello my name is junkyu
	//->{{hello},{my},{name},{is},{junkyu}}
	//= 이게 곧 사실상 이중배열과 같다
	char inputStr[5][10];
	printf("입력하세요~~ 문자열 5덩어리");
	for (int i = 0; i < 5; i++) {
		scanf_s("%s", inputStr[i], sizeof(inputStr[i]));
	}
	for (int i = 0; i < 5; i++) {
		printf("%s ", inputStr[i]);
	}
	*/
	/*
	//#include<string.h>를 써라.
	
	char input2[100][100];
	printf("입력 : ");
	scanf_s("%s", input2, sizeof(input2));
	//scanf_s("표현자리",변수,크기값 설정);
	printf("%s", input2);
	*/

	
	//char str1[10] = "hello"; //{hello00000
	//int num=sizeof(str1) / sizeof(char)-1;
	//printf("%d",num);
	//이 경우는 null값까지 char 1칸당 1바이트 x10칸
	//= total 10이 나온다. 거기다가 -1했으니 9가나옴.
	/*
	int num2 = strlen(str1);//string length
	//이름();=함수,메소드:"실행하게 하는 것"
	printf("%d", num2);
	//이렇게 string length함수 strlen을 사용하면
	//총 10칸이지만 실효적으로 들어있는 문자열 갯수만큼
	//용량이 나옴.

	//char str[10]="hihellowordlclang";
	//이렇게 해놓으면 출력은 문제없을지몰라도
	//내부적으로 엉키고 과열된다.
	//고로, 이런건 하지마라.
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
printf("요일 : ");
scanf("%s", week);
strcat(originT,week);//string concatenation
//오른쪽에 있는걸 왼쪽으로 합치는 기능.
printf("%s\n", originT);
printf("%s %s \n",originT, week);
*/
/*
//비교
char txt1[] = "text";
char txt2[] = "test";
if (txt1 == txt2) {
	printf("같은 값입니다.");
}
else printf("다른 값입니다.");
//둘다 똑같이 text라고 선언 했는데도
//왜 서로 다르다고 나온걸까?
//글자가 같다고해서 그 둘이 서로 같다고
//할 수 없지않은가.
//ex.같은 회사 같은기종 같은용량 같은색상의
//휴대폰이 2개가있는데 그 2개가 서로 같은건 X

//즉, 배열은 할당된 주소들이있는데
//서로 다른 주소에 같은 문자를 집어넣었을뿐이지
//그 2개가 서로 같은건 아님. 서로 다른 주소.
//마치 확통에서 확률계산할때 같은 색상의 공을
//서로 다른걸로 취급하는 느낌.
//strcmp(txt1,txt2); ->
int result = strcmp(txt1, txt2); //-1,0,1
printf("%d\n", result);
switch (result) {
case -1:
	printf("앞에 사용한 변수가 우선");
	break;
case 0:
	printf("둘의 값은 서로 같다.");
	break;
case 1:
	printf("뒤에 사용한 변수가 우선");
	break;
default:
	return 0;
}
*/

//<포인터>
//&는 곧 주소이다.
//배열의값들은 각각의 어떠한 주소에 저장됨.
//ex.연희동123번지가 형식이네 집이라면
//만약에 연희동123번지를 yh123이라고 하고 형식이네 집을 hs라고한다면
//int* hs=&yh123; or int *hs=&yh123; or int hs*=&yh123;
// 원래 가지고있는 주소에 대한 약칭,주소를 가리키는 명칭과 같은 느낌. 포인터
//따라서 *는 1.곱하기연산의 역할 2.포인터선언의역할 3.결과 값.(=printf("%d",*hs);
//변수 1.그냥 값을 담는 것 or 2.주소위치
//*&이 둘을 같이쓰면 상쇄되서 없는 것이 된다.




return 0;
}