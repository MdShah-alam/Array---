#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    char s2[100];
    strcpy(s2,s);
    printf("%s\n",s2);
    int i=strcmp(s2,s);
    {
    if(i==0)
    {
        i++;
         printf("%d",i);
    }
    else
    {
      i--;
      printf("%d",i);
    }
}
}
