#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    bool a[n+2][m+2]={};
    for(int i=1;i<=q;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=true;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]) cout<<"* ";
            else
            {
                int sum=0;
                if(a[i-1][j-1]) sum++;
                if(a[i-1][j]) sum++;
                if(a[i-1][j+1]) sum++;
                if(a[i][j-1]) sum++;
                if(a[i][j+1]) sum++;
                if(a[i+1][j-1]) sum++;
                if(a[i+1][j]) sum++;
                if(a[i+1][j+1]) sum++;
                cout<<sum<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}