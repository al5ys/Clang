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
	printf("�ֹ��Ͻ� %s ���Ա���\n������ %d���Դϴ�.\n������� %c�̱���\n�ֹ��Ͻ� Ŀ�Ǵ� %s�Դϴ�.\n", a.menu, a.price, a.size, a.iceorhot);
	printf("%d\n%s", a.b.coupon, a.b.clilevel);
	
	return 0;

}