#include<stdio.h>
int main(void){
	int dollar;
	printf("\nEnter the amount to know amount of change needed:");
	scanf("%d",&dollar);
	int twenty, ten, five, one;
	twenty = dollar/20;
	dollar = dollar - (twenty*20);
    ten = dollar/10;
	dollar = dollar - (ten*10);
	five = dollar/5;
	dollar = dollar - (five*5);
	one = dollar;

	printf("Twenty : %d\n Ten : %d\n Five : %d\n One : %d\n",twenty,ten,five,one);
}

//at first I was lost for long time I did not know what to do even after reading the hint
//I was able to understand the problem and solve it after seeing few solutions 
//i guess it is important to know how to solve a problem this helped
//I might be close enough to solve it without seeing the code but still some things i understood
//tbh this was fun to solve
