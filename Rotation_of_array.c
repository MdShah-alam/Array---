#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<b; i++)
    {
        int temp=a[0];
        for(int j=0; j<n; j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
