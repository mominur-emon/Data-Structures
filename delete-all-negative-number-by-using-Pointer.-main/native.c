/*Here  declare a  pointer array and dynamically allocate memory to input elements of array.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, *tempList;
    int i,n;

    printf("Enter array size: ");
    scanf("%d",&n);


    ptr=(int*)malloc(n*sizeof(int));

    printf("Enter elements : ");
    for(i=0; i<n; i++)
    {

        scanf("%d",&ptr[i]);
    }

    tempList = (int*) malloc (n*sizeof(int)) ;

    int c=0;

    for(i=0; i<n; i++)
    {
        if(ptr[i]>=0)
        {
           tempList[c] = ptr[i] ;
            c++;
        }
    }

    printf("\nArray positive elements are: ");

    for(i=0; i<c; i++)

    {
        printf("%d  ",tempList[i]);
    }

    getch();
}
