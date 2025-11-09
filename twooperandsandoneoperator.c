#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number :- ");
    scanf("%d",&a);
    printf("Enter a number :- ");
    scanf("%d",&b);

    char operator;
    printf("Enter the Operator(+, -, *, /) :- ");
    scanf(" %c",&operator);


    switch(operator)  {
        case '+':
            printf("Sum is :- %d",a + b);
            break;
        case '-':
            printf("Sub is :- %d",a - b);
            break;
        case '*':
            printf("Mul is :- %d",a * b);
            break;
        case '/':
            if(b == 0)  {
                printf("Zero Error");
            } else
                printf("Div is :- %f",(float)a / b);
            break;
        default:
            printf("Invalid Operator plzz enter valid operator");
    }
    

    printf("\n");
    return 0; 
}