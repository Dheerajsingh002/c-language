#include<stdio.h>
int main()
{
    char ch='a';
    // scanf("%c",&ch);
    while(ch<='z')
    {
        printf("%c ",ch);
        ch++;
    }
    return 0;
}