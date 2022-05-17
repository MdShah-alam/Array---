#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int l=strlen(s);
    char c;
    int i1=0,a=0,q=0,z=0,w=0;
    int  s1=0,x=0,c1=0,d=0,e=0,r=0,f=0,v=0,b=0,g=0,t=0;
    int y=0,h=0,n1=0,m=0,j=0,u=0,k=0,l1=0,o=0,p=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        c=s[i];
        if(c=='a'||c=='A')
            a++;
        else if(c=='b'||c=='B')
            b++;
        else if(c=='c'||c=='C')
            c1++;
        else if(c=='d'||c=='D')
            d++;
        else if(c=='e'||c=='E')
            e++;
        else if(c=='f'||c=='F')
            f++;
        else if(c=='g'||c=='G')
            g++;
        else if(c=='h'||c=='H')
            h++;
        else if(c=='i'||c=='I')
            i1++;
        else if(c=='j'||c=='J')
            j++;
        else if(c=='k'||c=='K')
            k++;
        else if(c=='l'||c=='L')
            l1++;
        else if(c=='m'||c=='M')
            m++;
        else if(c=='n'||c=='N')
            n1++;
        else if(c=='o'||c=='O')
            o++;
        else if(c=='p'||c=='P')
            p++;
        else if(c=='q'||c=='Q')
            q++;
        else if(c=='r'||c=='R')
            r++;
        else if(c=='s'||c=='S')
            s1++;
        else if(c=='u'||c=='U')
            u++;
        else if(c=='t'||c=='T')
            t++;
        else if(c=='v'||c=='V')
            v++;
        else if(c=='w'||c=='W')
            w++;
        else if(c=='x'||c=='X')
            x++;
        else if(c=='y'||c=='Y')
            y++;
        else
            z++;
    }
   /** printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  ",a,z,q,w,s1,x,c1,d,e,r,f,v,b);
    printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  ",g,t,y,h,n1,m,j,u,k,l1,o,i1,p);*/
    if(a!=0&&b!=0&&c1!=0&&d!=0&&e!=0&&f!=0&&g!=0&&h!=0&&i1!=0&&j!=0&&k!=0&&l1!=0&&m!=0&&n1!=0&&
       o!=0&&p!=0&&q!=0&&r!=0&&s1!=0&&t!=0&&u!=0&&v!=0&&w!=0&&x!=0&&y!=0&&z!=0)
        printf("YES");
    else
        printf("NO");
}
