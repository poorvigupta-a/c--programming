#include <stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    int a,b,c,sum;
    printf("Enter three numbers :- ");
    scanf("%d %d %d",&a, &b, &c);
    sum = a + b + c;
    printf("Sum of three numbers :- %d\n",sum);
    printf("Average of three numbers :- %f\n",sum/3.0F);
    
    printf("\n");
    return 0; 
}