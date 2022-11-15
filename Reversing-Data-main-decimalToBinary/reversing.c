/*Reversing data requires that a given set of data be reordered so that the first and last elements  are exchanged. */
/*The idea of reversing data can be used in solving classical problem such as  converting a decimal number to a binary number.*/

#include<stdio.h>

 #define max 100

 int stack[max],top=-1,i,x;

  void push (int x)
  {
    top++;
    stack [top] = x;

   }
  int pop ()
   {
    return stack[top];

   }

  void  main()
  {
    int num, total = 0,item;
    printf( "Enter a decimal: ");
    scanf("%d",&num);

    while(num > 0)
     {
       total = num % 2;
       push(total);
       num /= 2;
     }

    for(i=top;top>=0;top--)
    {
     item = pop ();
     printf("%d",item);
    }
  }

