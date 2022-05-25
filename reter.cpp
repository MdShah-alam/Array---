#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int cont=0;
    for(int i=0; i<n; i++)
    {
        int sum2=a[i];
        for(int j=i+1; j<n; j++)
        {
            sum2=sum2+a[j];
            if(cont!=1)
            {
                if(sum==sum2)
                {
                    cout<<"Yes";
                    cont++;
                    break;
                }
            }
            else
            {
                sum2=sum2-a[j];
            }
        }
    }
}
