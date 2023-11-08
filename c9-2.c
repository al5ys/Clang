#include<stdio.h>

int main() {
	/*
	int megab1;
	printf("붕어빵메뉴의 개수를 입력하세요 : ");
	scanf_s("%d", &megab1);

	int megab2[1000];
	for (int a = 0; a < megab1; a++) {
		printf("%d번째 메가 붕어빵메뉴의 가격을 입력하세요 : ",a+1);
		scanf_s("%d", &megab2[a]);
	}

	for (int a = 0; a < megab1; a++) {
		printf("%d번째 붕어빵메뉴의 가격은 %d원 입니다.\n", a+1, megab2[a]);
	}
	
	printf("수고하셨습니다.\n");
	*/
	/*
	int coffee1;
	printf("커피 개수를 입력하세요 : ");
	scanf_s("%d", &coffee1);

	int coffee2[1000];
	for (int a = 0; a < coffee1; a++) {
		printf("%d번째 커피의 가격을 입력하세요 : ",a+1);
		scanf_s("%d", &coffee2[a]);
	}
	int max = coffee2[0];
	for (int a = 0; a < coffee1; a++) {
		if (max <= coffee2[a])
			max = coffee2[a];
		
	}
	printf("가장 비싼 커피의 가격은 %d원 입니다.\n", max);
	*/
	
	//<다차원배열>
	//mxn의 꼴이다. 주로, 2차원만쓰지 3차원이상의 고차원은 
	//지양하세요.

	//int starbucks[3][3];
	//1행 = 커피류
	//2행 = 논커피류
	//3행 = 티류
	/*
	char menu[3] = { "커피","논커피","티" };
	printf("커피류의 가격들을 입력하세요 : \n");
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			printf("%d번째의  %d가격을 입력하세요", b + 1,menu[a]);
			scanf_s("%d", &starbucks[a][b]);
		}
		
		
	}
	*/
	/*
	for (int a = 0; a < 3; a++) {
		if (a == 0) printf("커피류의 가격을 입력하세요\n");
		else if (a == 1) printf("논커피류의 가격을 입력하세요\n");
		else printf("티류의 가격을 입력하세요\n"); 
		for (int b = 0; b < 3; b++)
		{
			if (a == 0) printf("%d번째의 커피를 입력하세요\n", b);
			else if (a== 1) printf("%d번째의 논커피를 입력하세요\n", b);
			else printf("%d번째의 티를 입력하세요\n", b);
			scanf_s("%d", &starbucks[a][b]);
		}



	}
	*/
	/*
	char coffee[] = "americano";
	printf("내가 월급에서 가장 많이 쓰는 커피는 %c이다.\n", coffee[2]);
	printf("내가 월급에서 가장 많이 쓰는 커피는 %s이다.\n", coffee);
	//null의 기능을 다시한번 알아보자.
	char coffee2[] = "a\0mericano";
	printf("내가 월급에서 가장 많이 쓰는 커피는 %s이다.\n", coffee2);
	//배열 내부 일부 수정하기.
	coffee[8] = 'a';
	printf("내가 월급에서 가장 많이 쓰는 커피는 %s이다.\n", coffee);
	*/
	
	char coffee[100];
	printf("당신이 좋아하는 커피! ");
	//문자배열에서 scanf쓸 때 , &는 안붙인다.
	scanf_s("%s", coffee, sizeof(coffee));
	printf("당신이 돈을 많이 쓰게 한 커피는 %s이다.", coffee);
	//당신이 좋아하는 커피를 출력하세요.
	//1.americano
	//2.latte
	//3.deca
	//4.tea
	//당신이 좋아하는 커피는 ~이군요. 변수 하나로.
	int a;
	printf("당신이 좋아하는 커피를 출력하세요\n");
	printf("1.americano\n");
	printf("2.latte\n");
	printf("3.deca\n");
	printf("4.tea\n");
	scanf_s("%d", &a);

	//printf("당신이 좋아하는 커피는 %s");

	return 0;
}