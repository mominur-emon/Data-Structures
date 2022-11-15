/*C program to find LCM of two numbers using recursion.*/

#include<stdio.h>

int lcm(int a, int b)
{
    static int temp = 1;
    if(temp % a == 0 && temp % b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(a,b);
        return temp;
    }
}

int main()
{
    int n1, n2, LCM;

    printf("Input first number: ");
    scanf("%d", &n1);

    printf("\nInput second number: ");
    scanf("%d", &n2);


    LCM = lcm(n1, n2);

    printf("\nLCM of : %d\n", LCM);

    return 0;
}

