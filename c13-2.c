#include<stdio.h>

//구조체 나만의 타입만들기
typedef struct point {
	float x;
	float y;
}king; //struct point를 king이라 부르기로한 것.
int main() {
	//기본적인 데이터타입외에 내가 만들어낸 데이터타입
	//구조체는 여러데이터를 하나의 그룹으로 묶는 데 사용됩니다.
	/*
	//ex1
	
	typedef int length; //int 대신에 length를 하나의 데이터타입 자료형으로 선언.
	length width = 11; //가로(폭)=11
	length height = 111;//세로(높이)=111
	length arr[3];
	arr[0] = 100;
	arr[1] = 200;
	arr[3] = 300;
	typedef float point[2]; // 앞으로 point가 float형 배열[2]칸을 나타낼것.
	point k = { 1.5,3.3 }; //따라서 point[2]라 안써도 이미 point에 그 의미가 내장.
	//그래야 구조체지 똑같으면 뭐하러 구조체뻘짓을 하겠나

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