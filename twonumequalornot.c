#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two Numbers :- ");
    scanf("%d %d", &a,&b);
    if(a == b)  {
        printf("Equal number");
    } else {
        printf("Not Equal number");
    }
    

    printf("\n");
    return 0; 
}