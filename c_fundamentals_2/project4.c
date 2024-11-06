#include<stdio.h>
int main(void){

//asking user to enter the amount in float to accept dollar with cents.
	float dollar;
	printf("Enter the dollar with cents : ");
	scanf("%f",&dollar);

//finding out the 5% of the given value by the user 
	float per,tax;
	per = (5.0f/100.0f) * dollar;
	tax = dollar + per;
	printf("The enter amount : %.2f\nWith tax added : %.2f ",dollar,tax);
	return 0;
}
//final thoughts
//I forgot to use %f instead I used %d until I realized why I am not getting any output displayed.
//I guess practice improves and correct's the mistakes. 
//And I found out how to find the percentage of any number :) 
