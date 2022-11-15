/*find Largest Number Using Dynamic Memory Allocation from a list of  elements.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*arr;
    printf("Input size of array : ");
    scanf("%u",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int max = *arr;
     for(i=1;i<n;i++)
    {
        if(*(arr+i)>max)
        {
            max=*(arr+i);
        }
    }
    printf("Expected output %d\n",max);


}
