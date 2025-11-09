#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(int x = 1; x <= n; x++) {
        sum = sum + x;
    }
    printf("Sum of First N Natural NUmbers :- %d",sum);
    
    printf("\n");
    return 0; 
}