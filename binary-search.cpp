#include<iostream>
using namespace std;
int main()
{
    int a[15+1];
    int i=1;
    while(i<=15)
    {
        cin>>a[i];
        i++;
    }
    int x;
    cin>>x;
    int l=1,r=15,m;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==x)
        {
            cout<<m;
            break;
        }
        else if(x>a[m])
        {
            l=m+1;
        }
        else 
        {
            r=m-1;
        }
    }
}