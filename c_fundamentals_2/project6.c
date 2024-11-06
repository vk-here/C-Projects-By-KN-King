#include <stdio.h>

int main(void)
{
    int x;

    printf("\nThe following polynomial will be calculated:\n");
    printf("(3x + 2)x - 5)x - 1)x + 7)x - 6)\n\n");

    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("\n");

    x = (((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 7;

    printf("Answer is: %d\n\n", x);

    return 0;
}
//I don't know how the above expression works all of them needs to closed was said by the compiler that is it.
//I just wrote the same expression given in the book but the error happened I was able to fix it as it mentioned the problem.

