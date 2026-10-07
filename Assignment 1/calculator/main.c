#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operation: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op){
    case '+' :
        printf("%f", num1 + num2);
        break;
    case '-' :
        printf("%f", num1 - num2);
        break;
    case '*' :
        printf("%f", num1 * num2);
        break;
    case '/' :
        printf("%f", num1 / num2);
        break;
    default :
        printf("Invalid operator");
    }


    return 0;
}
