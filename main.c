#include <stdio.h>

int main()
{
    int number1, number2, i, gcd;

    printf("Enter Integer 1: ");
    scanf("%d", &number1);
    printf("Enter Integer 2: ");
    scanf("%d", &number2);

    for(i=1; i <= number1 && i <= number2; ++i)
    {
        if(number1%i==0 && number2%i==0)
        {
           gcd = i; 
        }
    }

    printf("Greatest Common Divider of %d and %d is %d", number1, number2, gcd);

    return 0;
}
