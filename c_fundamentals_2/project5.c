#include<stdio.h>
int main(void){

//accepts the value of x
int x;
printf("enter value of x : ");
scanf("%d",&x);
int x2,x3,x4,x5;
x2 = x*x;
x3 = x2*x;
x4 = x3*x;
x5 = x4*x;

int	HON = (3*x5)+(2*x4)-(5*x3)-(2*x2)+(7*x)-6;
	printf("the x is %d \n",HON);
	return 0;
}
//final thoughts
//this was tougher than I thought would be.
//you need to store the x square valued in separate integer else you will get an error.
//now I know complex calcualtions should be in parts rather trying to make it all in a line. Note: This might be false.
