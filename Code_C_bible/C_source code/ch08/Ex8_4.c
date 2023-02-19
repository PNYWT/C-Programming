#include <stdio.h>

main() {
	int price,pay,return_money;
	int _1000paper,_500paper,_100paper,_50paper,_20paper;
	int _10coin,_5coin,_1coin;
	printf("Product price : ");
	scanf("%d",&price);
	printf("You pay ");
	scanf("%d",&pay);
	return_money = pay-price;

	if(return_money<0) {
		printf("Your price %d baht , you pay %d baht , ",price,pay);
		printf("Please add %d baht",price-pay);
	}
	else {
		printf("Return money %d baht\n",return_money);
		if(return_money==0)
			printf("No money return\n");
		if(return_money>=1000) {
			printf("_1000paper : %d\n",return_money/1000);
			return_money = return_money%1000;
		}
		if(return_money>=500) {
			printf("_500paper : %d\n",return_money/500);
			return_money = return_money%500;
		}
		if(return_money>=100) {
			printf("_100paper : %d\n",return_money/100);
			return_money = return_money%100;
		}
		if(return_money>=50) {
			printf("_50paper : %d\n",return_money/50);
			return_money = return_money%50;
		}
		if(return_money>=20) {
			printf("_20paper : %d\n",return_money/20);
			return_money = return_money%20;
		}
		if(return_money>=10) {
			printf("_10coin : %d\n",return_money/10);
			return_money = return_money%10;
		}
		if(return_money>=5) {
			printf("_5coin : %d\n",return_money/5);
			return_money = return_money%5;
		}
		if(return_money>=1)
			printf("_1coin : %d\n",return_money);
	}
}

/* 
Product price : 34524
You pay 40000
Return money 5476 baht
_1000paper : 5
_100paper : 4
_50paper : 1
_20paper : 1
_5 coin : 1
_1coin : 1
*/