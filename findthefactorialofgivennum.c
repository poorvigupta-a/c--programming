#include <stdio.h>
int main()
{
    int n, sum = 1;
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(int x = 1; x <= n; x++) {
        sum = sum * x;
    }
    printf("Factorial :- %d",sum);
    
    printf("\n");
    return 0; 
}