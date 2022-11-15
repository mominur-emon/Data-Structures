/*C program to find power of any number using recursion.*/

#include <stdio.h>

int power(int n, int p)
{
    if ( p!= 0)
        return ( n * power( n, p - 1));
    else
        return 1;
}

int main()
{
    int n, p, result;
    printf("Enter any number: ");
    scanf("%d", & n);
    printf("\nEnter power: ");
    scanf("%d", &p);

    result = power( n , p);

    printf("\nResult of : %d \n",result );
    return 0;
}

