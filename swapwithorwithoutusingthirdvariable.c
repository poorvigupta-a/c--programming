#include <stdio.h>

int main()
{
    int a = 200,b = 100,c;
    printf("Before A :- %d, B :- %d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("After  A :- %d, B :- %d\n",a,b);

    printf("\n");
    return 0; 
}