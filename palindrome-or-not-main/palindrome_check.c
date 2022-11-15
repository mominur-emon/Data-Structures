/*C program to check whether a number is palindrome or not using recursion.*/

#include<stdio.h>
int check_palindrome(int num);

int main()
{
   int n, rev_num;

   printf("Enter a number: ");
   scanf("%d",&n);

   rev_num = check_palindrome(n);

   if(n==rev_num)
   {

     printf("\n%d is a palindrome number \n ",n);

   }

   else
      printf("%d is not a palindrome number",n);

   return 0;
}

int check_palindrome(int n)
{

   static int rev_num=0, rem ;

   if(n!=0)
  {
      rem = n % 10;
      rev_num = rev_num*10 + rem ;
      check_palindrome(n/10);
   }

   return rev_num;
}
