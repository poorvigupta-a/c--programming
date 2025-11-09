#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5;
    printf("Enter Five Marks :- ");
    scanf("%f %f %f %f %f", &m1 , &m2 , &m3 , &m4 , &m5);

    float totalMarks = m1 + m2 + m3 + m4 + m5;
    int result = (totalMarks / 500) * 100;

    switch(result)  {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Gread B");
            break;
        case 60 ... 79:
            printf("Gread C");
            break;
        case 35 ... 59:
            printf("Gread D");
            break;
        default:
            printf("Fail");
    }
    

    printf("\n");
    return 0; 
}