#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int second, third;
    for(int i=1;i<n;i++)
    {
        if(max<a[i]);
        {
            third=second;
            second=max;
            max=a[i];
        }
    }
    printf("%d",third);
}
