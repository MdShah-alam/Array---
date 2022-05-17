#include<stdio.h>
int main()
{
    char s[101],c;
    scanf("%s",s);
    int sum=0;
    for(c='a'; c<='z'; c++)
    {
        int count=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(c==s[i])
                count++;
        }
        if(count>0)
        {
            count=1;
            sum=sum+count;
        }
    }
    if((sum)%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}

