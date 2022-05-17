#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int i,j,count=0;
    for(i=0,j=1; s[j]!=0; i++,j++)
    {
        if((s[i])==(s[j]))
        {
            count++;
        }
    }
    printf("%d",count);
}
