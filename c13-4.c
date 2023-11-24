#include<stdio.h>
struct ediya2 {
	int coupon;
	char clilevel;
};

//
struct ediya {
	char menu[50];
	int price;
	char size;
	char iceorhot[10];
	struct ediya2 b;
};
int main() {
	struct ediya a = { "americano",4500,'T',"iced",{11,"vip"} };
	printf("주문하신 %s 나왔구요\n가격은 %d원입니다.\n사이즈는 %c이구요\n주문하신 커피는 %s입니다.\n", a.menu, a.price, a.size, a.iceorhot);
	printf("%d\n%s", a.b.coupon, a.b.clilevel);
	
	return 0;

}