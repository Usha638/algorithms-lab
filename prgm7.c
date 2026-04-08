#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 256
int Table[SIZE];
void shiftTable(char P[10])
{
    int i,m;
    m=strlen(P);
    for(i=0;i<SIZE;i++)
        Table[i]=m;
    for(i=0;i<m-2;i++)
        Table[P[i]]=m-1-i;
}
int harspool(char T[50],char P[10])
{
    int i,k,m,n;
    n=strlen(T);
    m=strlen(P);
    shiftTable(P);
    i=m-1;
    while(i<=n-1)
    {
        k=0;
        while(k<m&&T[i-k]==P[m-1-k])
            k=k+1;
        if(k==m)
            return i-m+1;
        else
            i=i+Table[T[i]];
    }
    return -1;
}
int main()
{
    char T[50],P[10];
    int position;
    printf("\n Read text\n");
    scanf("%s",T);
    printf("\n Read pattern \n");
    scanf("%s",P);
    position=harspool(T,P);
    if(position==-1)
        printf("\n Pattern not found");
    else
        printf("\n Pattern found at location%d \n");
    return 0;
}
