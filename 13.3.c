#include<stdio.h>
/*
struct point {
	float x;
	float y;

};
*/
struct ingredients {
	int shots;
	int milk_ml;
	int syrup_ml;
};
struct starbuckscoffee {
	char name[50];
	int price;
	char size; 
	int calories;
	struct ingredients ingredient;

};
int main() {
	//struct point a = { 1.4,5.0 };
	struct starbuckscoffee coffee1 = { "ice americano",3000,'T',10,{2,0,0} };
	//coffee1.name="ice coffee" ,coffee1.price=3000
	printf("%s의 가격은 %d이고 사이즈는 %c이고 칼로리는 %d입니다.\n",coffee1.ingredient.shots,
		coffee1.ingredient.milk_ml,
		coffee1.ingredient.syrup_ml
		,coffee1.name,coffee1.size,coffee1.calories);

	return 0;
}