#include<stdio.h>
int main()
{
    float m,cm,km;
    printf("enter the value opf cm");
    scanf("%f",&cm);
    m=cm/100.0;
    km=cm/100000.0;
    printf("\n%f\n%f",m,km);
    return 0;
}