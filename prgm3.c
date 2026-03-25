#include <stdio.h>
#include <stdlib.h>
int count;
int partition(int A[10], int l, int r)
{
    int i, j, temp, pivot;
    pivot=A[l];
    i=l+1;
    j=r;
    while(1)
    {
        while(i<=r && pivot>=A[i])
        {
            count=count+1;
            i++;
        }
        while(j>=l && pivot<A[j])
        {
            count=count+1;
            j--;
        }
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        else
        {
            temp=A[l];
            A[l]=A[j];
            A[j]=temp;
            return j;
        }
    }
}
void quicksort(int A[10], int l, int r)
{
    int s;
    if(l<r)
    {
        s=partition(A, l, r);
        quicksort(A, l, s-1);
        quicksort(A, s+1, r);
    }
}
int main()
{
    int i, n, A[10];
    printf("\n read array size:");
    scanf("%d",&n);
    printf("\n read array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    quicksort(A, 0, n-1);
    printf("Sorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nTotal number of comparision=%d",count);
    return 0;
}
