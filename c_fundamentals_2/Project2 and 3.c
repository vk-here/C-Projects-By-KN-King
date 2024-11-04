#define pi 3.14
#include<stdio.h>
int main(void)
{
	float volume;
	//int radius = 10; used for 2nd project
	int radius;

	printf("Enter the radius of the sphere : ");
	scanf("%d",&radius);
	//this two statements satisfy the 3rd project conditions.

	volume = (4.0f/3.0f) * (pi) * (radius * radius * radius) ;
	printf("vol %f",volume);

	return 0;
}
//output
//answer is 4186.666791
//this will be the output if we use 4/3 instead of 4.0f/3.0f to 3140.000000.
//the output shows the difference between use of float in place of int. 
