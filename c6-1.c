#include <stdio.h>

int main()
{
	/*
	//室 舛呪研 脊径閤焼辞 滴奄授生稽 窒径聖 背左切.
	int a, b, c;
	printf("舛呪 3鯵研 脊径背左室推 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) printf("a , b , c\n");
		else if (a > c) printf("a , c , b\n");
		else printf("c , a , b\n");
	}
	else {
		if (a > c) printf("b , a , c\n");
		else if (b > c) printf("b , c , a\n");
		else printf("c , b , a\n");
	}
	
	printf("呪壱馬写柔艦陥.");
	*/
	
	//庚薦1 2鯵税 丞税 舛呪 m,n聖 脊径閤焼 砧 呪税 薦咽淫域 嬢恐走 窒径
	//薦咽淫域亜 焼艦檎 none / n,m税 企社淫域澗 乞献陥.
	//ex. 4 2 -> 2^2\4 / 3 9 -> 3*3=9 / 4 3 ->none
	/*
	int n, m;
	printf("砧 丞税 舛呪研 脊径背 左室推 : ");
	scanf_s("%d %d", &n, &m);
	if (m == n * n) printf("%d * %d = %d\n", n, n, m);
	else if (n == m * m) printf("%d * %d = %d\n", m, m, n);
	else printf("None\n");
	//食増杯税 追戚什亀 壱形馬食 購税 if坪球研 団爽切.
	if (n <= 0 || n <= 0) {
		printf("丞税 舛呪研 脊径馬走 省紹柔艦陥.");
	}
	
	//庚薦2 3鯵税 舛呪研 脊径 閤壱 , 置奇葵引 置借葵聖 窒径馬澗 覗稽益轡
	//ex.2 3 4 -> 4 2 / 3 2 1->3 1
	int a, b, c;
	printf("室 鯵税 舛呪研 脊径背 左室推 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) printf("%d %d\n", a, c);
		else if(c>a) printf("%d %d\n", c, b);
		else printf("%d %d\n", a, b);
		
	}
	else if (c > b) printf("%d %d\n", c, a);
	else {
		if (a > c) printf("%d %d\n", b, c);
		else printf("%d %d\n", b, a);
	}
	//庚薦2税 識持還 坪球
	//識持還精 痕呪 max人 min聖 魚稽 幻球重陥製 if拭 企廃 井酔税 呪雌伐拭 魚虞 max= , min= 稽 拝雁聖 背爽写陥.
	//max人 min 2亜走稽 蟹刊嬢辞 廃腰拭 照亜壱 巷縦馬陥檎 巷縦馬惟 2亜走 呪莫亀什展析稽 亜宿.
	//益陥製 原走厳拭 printf("置奇葵 :%d , 置借葵 :%d",max,min); 戚係惟 窒径聖 馬宿.

	
	//(嬢形崇)庚薦3 厩慎呪 繊呪研 脊径閤焼 
	//1.91.5戚雌 A 85.5戚雌B 80.5戚雌 C窒径
	//2.3引鯉掻 馬蟹虞亀 100繊戚 赤生檎 GOOD窒径
	//3.4引鯉掻 馬蟹虞亀 60繊 耕幻戚 赤生檎 BAD窒径
	//4.聡,俳繊引 good bad室鯵 乞砧 糎仙拝呪赤製.

	float d, e, f;
	printf("厩嬢 慎嬢 呪俳税 繊呪研 脊径馬室推 : ");
	scanf_s("%f %f %f", &d, &e, &f);
	if (d >= 91.5)
		printf("A ");
	if (d == 100) printf("Good ");
	else if (d >= 85.5) printf("B ");
	else if (d >= 80.5) printf("C ");
	else if (d >= 60) printf("");
	else printf("Bad ");
	if (e >= 91.5)
		printf("A ");
	if (e == 100) printf("Good ");
	else if (e >= 85.5) printf("B ");
	else if (e >= 80.5) printf("C ");
	else if (e >= 60) printf("");
	else printf("Bad ");

	if (f>= 91.5)
		printf("A ");
	if (f == 100) printf("Good ");
	else if (f >= 85.5) printf("B ");
	else if (f >= 80.5) printf("C ");
	else if (f >= 60) printf("");
	else printf("Bad ");
*/
	/*
	//switch庚戚空? switch庚精 if庚聖 焼爽 娃舘馬惟 
	char k;
	scanf_s("%c", &k);
	switch (k) {
	case 'a':
		printf("照括!");
		break; //琶呪
	case 'b':
		printf("逸艦卓人!");
		break;
	case 'c':
		printf("Hello!");
		break;
	default:
		printf("Perfect!");
		break;
	}
	*/
	/*
	int number;
	printf("腰硲研 隔嬢爽室推 : (1~4腰)");
	scanf_s("%d", &number);
	switch (number) {
	case 1:
		printf("獣什奴 獣拙");
		break;
	case 2:
		printf("獣什奴 竺舛");
		break;
	case 3:
		printf("獣什奴 箭穿");
		break;
	case 4:
		printf("獣什奴 曽戟");
		break;
	default:
		printf("獣什奴 拭君");
		break;
	}
	*/
	//庚薦 switch庚聖 戚遂馬食 背雁杉聖 脊径 板 
	//3~5杉精 砂脊艦陥. 廃悪亜獣倉
	//6~8杉精 食硯脊艦陥. 廃悪亜偲辞 帖呼馬獣倉.
	//9~11杉精 亜聖脊艦陥. 戚災拭 域獣壱 政透崎 左獣倉 ぞぞ
	//12~2杉精 移随脊艦陥. 戚災拭 域獣壱 掛巴 左獣倉 ぞぞ
	//益須澗 背雁 域箭戚 蒸嬢推~!!
	int l;
	printf("背雁 杉聖 脊径馬室推 ~ !!   ");
	scanf_s("%d", &l);
	switch (l) {
	case 3:case 4:case 5: //戚係惟 廃腰拭 背亀 吉陥. 亜獣失溌左拭 赤嬢 疏陥.
		printf("廃悪亜辞 蟹級戚 馬獣倉 ぞぞぞ");
		break;
	case 6:case 7:case 8:
		printf("廃悪亜偲辞 帖呼馬獣倉 ぞぞぞ");
		break;
	case 9:
		printf("戚災拭 域獣壱 政透崎 左獣倉 ぞぞ");
		break;
	case 10:
		printf("戚災拭 域獣壱 政透崎 左獣倉 ぞぞ");
		break;
	case 11:
		printf("戚災拭 域獣壱 政透崎 左獣倉 ぞぞ");
		break;
	case 12:
		printf("戚災拭 域獣壱 掛巴 左獣倉 ぞぞ");
		break;
	case 1:
		printf("戚災拭 域獣壱 掛巴 左獣倉 ぞぞ");
		break;
	case 2:
		printf("戚災拭 域獣壱 掛巴 左獣倉 ぞぞ");
		break;
	default:
		printf("背雁 域箭精 蒸柔艦陥 ~!!!");
		break;
	}
	int a;
	printf("収切 馬蟹 脊径背左室推 : ");
	scanf_s("%d", &a);
	switch (a) {
	case
	}






	

	return 0;
}