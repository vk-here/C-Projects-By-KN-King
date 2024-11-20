#include<stdio.h>
#define cal (loan * rate / 100.0 / 12.0)
int main(void){
	float loan, rate, payment;
	printf("\nEnter amount of loan :\n");
	scanf("%f",&loan);
	printf("Enter the interest rate :\n");
	scanf("%f",&rate);
	printf("Enter the montly payment :\n");
	scanf("%f",&payment);
    loan = loan - payment + cal;
    printf("Balance remaining after first payment: $%.2f\n", loan);

    
    loan = loan - payment + cal;
    printf("Balance remaining after second payment: $%.2f\n", loan); 

    loan = loan - payment + cal;
    printf("Balance remaining after third payment: $%.2f\n", loan);

return 0;
	}
//this was hard for me to figure out but i refered to some code
// done it as i could and used the define to make own function that can be reused
