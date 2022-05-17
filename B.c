#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    temp=a[0];
    for(int i=1; i<n; i++)
    {
        if(temp<a[i])
        {
            temp=a[i];
        }
    }
    //printf("%d\n",temp);
  int sum=0;
  for(int i=0;i<n;i++)
  {
      while(a[i]!=temp)
      {
          a[i]++;
          sum++;
      }
  }
  printf("%d",sum);
}
