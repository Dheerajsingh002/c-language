#include<stdio.h>
#include<math.h>
int main()
{
    float base,perpendicular,hypotaneous;
    printf("enter the value of base: ");
    scanf("%f",&base);
    printf("entyer the value of perpendicular: ");
    scanf("%f",&perpendicular);
    hypotaneous=sqrt(base*base+perpendicular*perpendicular);
    printf("%f",hypotaneous);
}
