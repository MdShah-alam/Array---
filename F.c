#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a,count=0;
    if((1<=n) ||(n<=pow(10,18)))
    {
        while(n>0)
        {
            a=n%10;
            n=n/10;
            if(a!=4 && a!=7)
            {
                count++;
            }
        }
    }
    if(count==0)
        printf("YES");
    else
        printf("NO");
}
