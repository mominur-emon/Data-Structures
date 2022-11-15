/*A function sortarray(int n, int  *p) where n is the total array size and p is a pointer variable that have array address*/

#include <stdio.h>
#include<stdlib.h>
void sortarray(int n, int *p)
{
    int i, j, temp;

    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(p + j) < *(p + i)) {

                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }



}

int main()
{
    int i,n,*arr;
    printf("Input size of array : ");
    scanf("%u",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Input %u number of elements in the array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    sortarray(n, arr);

    printf("Expected Output:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
}
