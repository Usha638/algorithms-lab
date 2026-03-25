#include <stdio.h>
#include <stdlib.h>

int count;
    void bubblesort(int A[10],int n)
    {
        int i,j,temp;
        for(i=0;i<=n-2;i++)
        {
            for(j=0;j<=n-2-i;j++)
            {
                count=count+1;
                if(A[j]>A[j+1])
                {
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }
    }
int main()
{
    int a[10],n,i;
    printf("\n Read array size:");
    scanf("%d",&n);
    printf("\n Read array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubblesort(a,n);
    printf("\n Sorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n Total number of comparison=%d",count);
    return 0;
}
