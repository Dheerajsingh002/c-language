#include <stdio.h>
int main() {
    int a, b, i, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; ++i) {
        
        // check if i is a factor of both integers
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", a, b, lcm);
    return 0;
}