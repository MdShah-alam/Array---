#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int len=strlen(s);
    if(s[0]<='A' && s[0]>='Z')
        printf("%s",s);
    else
    {
        s[0]=toupper(s[0]);
            printf("%s",s);
    }
}
