#include<stdio.h>

void printSystemManual() {
	printf("1.커피판매하기\n");
	printf("2.커피등록하기\n");
	printf("3.커피삭제하기\n");
	printf("4.일일커피판매량 및 매출 확인하기\n");
	printf("5.시스템 종료\n");
	printf("시스템 번호를 입력해주세요.\n");
}
typedef	struct ediya {
	char menu[50];
	int price;
	int shot;
	int cal;
}ediya2;
void selcof() {
	for (int i = 0; i < 3; i++) {
		printf("%d번째 커피는 %s이고 가격은 %d입니다.\n", i, a[i].menu, a[i].price);
	}
	int select;
	printf("커피를 선택하세요 : ");
	scanf_s("%d", &select);
	cofpri();
}
void cofpri() {
	
	printf("가격은 %d입니다.", a[select].price);
	income += a[select].price;
}

int main() {
	int systemCode;

	ediya2 a[20] = { 
		{ "ice americano",4500,2,10 } ,
		{ "latte",5000,2,250 },
		{ "vanilla latte",5500,2,350 } 
	};

	int income = 0;
	do {
		printSystemManual();
		scanf_s("%d", &systemCode);
		switch (systemCode) {
			case 1:
				selcof();
				printf("가격은 %d입니다.", a[select].price);
				income += a[select].price;
				break;
			case 4:
				printf("금일 매출액은 %d입니다.\n", income);
				break;
		}
		
		
		
	} while (systemCode != 5);
	printf("시스템 종료합니다...Have a Good Day\n");
	return 0;
}