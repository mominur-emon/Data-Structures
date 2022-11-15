/*C program to find GCD of two numbers using recursion.*/

#include <stdio.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int n1, n2, GCD;

    printf("Input first number: ");
    scanf("%d", &n1);

    printf("\nInput second number: ");
    scanf("%d", &n2);


    GCD = gcd(n1, n2);

    printf("\nGCD of : %d\n", GCD);

    return 0;
}
