#include <stdio.h>
int main()
{
    int n, oddSum = 0, evenSum = 0;
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(int x = 1; x <= n; x++) {
        if(x % 2 == 0)
            evenSum += x;
        else
            oddSum += x;
    }
    printf("Sum of First even natural number :- %d\n",evenSum);
    printf("Sum of First odd  natural number :- %d\n",oddSum);
    
    printf("\n");
    return 0; 
}