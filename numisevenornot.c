#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number :- ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("This is a Even number");
    else
        printf("This is a Odd number");

    printf("\n");
    return 0; 
}