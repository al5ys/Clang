#include<stdio.h>

int main() {
	//<포인터>
	//포인터란? 각 변수가 가지고있는 주소와 같다.
	//포인터를 배우는 이유 RAM을 좀더 편하고 효율적으로 control하기위해
	//배열에서 배열이름 그 자체가 주소값.
	//그래서 문자열 입력받을 때 &를 사용 안하는 이유.
	//문자열배열은 그자체. 정수형배열은 각각.
	//컴퓨터는 메모리주소값이 같아야 같다고말한다.
	//그래서 a=3과 c=3이있는데 서로 겉으로는 3이지만 내부 주소가 다르므로
	//서로 다르다.

	/*
	int a = 3; //변수 a선언 후 할당.
	int b = 3;
	
	int* ptr_a;
	ptr_a = &a;//&a는 주소연산자이다. ^^7!
	int* ptr_b;
	ptr_b = &b;
	//a의 값.
	printf("%d\n", a);
	printf("%d\n", *ptr_a);//*ptr_a=그 포인터가 가리키는 변수의 값을 의미한다.
	//a의 주소.
	printf("%d\n", &a);
	printf("%d\n", ptr_a);
	
	printf("%d\n", &ptr_a);//이건 뭐 그 포인터의 주소인데 여기선 굳이 의미 없음.
	*/
	/*
	int a = 10;
	printf("&a = %d\n", &a);
	printf("&a + 1 = %d\n", &a+1); //4바이트차이. 
	*/
	
	/*
	//배열에서 이름 그 자체가 곧 주소이올시다. 그리고 그 주소가 곧 a[0]의 주소값이올시다.
	//a[0]의 주소가 한마디로 그 배열의 대표주소와 같다.
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pArrA;
	pArrA = &a;//pArrA=a; 배열에서는 a가 곧 a의 주소.

	//숫자 3을 원해요~!!!
	printf("a[2] = %d\n", a[2]);
	printf("a[2] = %d\n",*(pArrA+2));
	printf("a[2] = %d\n", *(&a[2])); //&*혹은*&는 서로 상쇄.
	printf("a[2] = %d\n", *(a + 2));

	//a=a배열의 주소값 , a[0]=각 항목의 값을 입력하고자 하는 의미.
	printf("%d\n", a);
	printf("%d\n", &a);
	printf("%d\n", &a[0]);
	printf("%d\n", &a[1]);
	*/
	/*
	//<정리>
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr;
	ptr = arr; //배열에서 arr=&arr

	printf("&arr[3]의 값은 %d입니다.\n", &arr[3]); //4의 주소값.
	printf("arr+3의 값은 %d입니다.\n", arr+3); //4의 주소값.
	printf("ptr+3의 값은 %d입니다.\n", ptr+3); //4의 주소값.
	printf("&ptr[3]의 값은 %d입니다.\n", &ptr[3]); //4의 주소값.

	printf("arr[3]의 값은 %d입니다.\n", arr[3]); //4
	printf("ptr[3]의 값은 % d입니다.\n", ptr[3]); //4
	printf("*(arr+3)의 값은 %d입니다.\n", *(arr+3)); //4
	printf("*(ptr+3)의 값은 %d입니다.\n", *(ptr+3)); //4
	*/
	/**
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int(*pArr)[3]=&arr[1]//&arr[0]이 될 수도있다.
	for(int i = 0; i < 3; i++) {
		printf("%d\n", (*pArr)[i]);
		
		
	}
	*/
	int a = 3;
	int b = 5;
	//포인터연산자를 사용하여 둘의 값을 바꿔보세요!
	int* ptr_a;
	ptr_a = &a;
	
	int temp = *ptr_a; //temp=3
	*ptr_a = b; //a=5
	b = temp;//b=3
	

	printf("%d %d", a, b);
	return 0;
}