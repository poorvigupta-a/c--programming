#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three Numbers :- ");
    scanf("%d %d %d", &a,&b, &c);
    if(a >= b && a >= c)  {
        printf("Greter number is :- %d",a);
    } else if(b >= c) {
        printf("Greter number is :- %d",b);
    }   else {
        printf("Greter number is :- %d",c);
    }
    

    printf("\n");
    return 0; 
}