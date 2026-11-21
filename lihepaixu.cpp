#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct box
{
    int id;
    vector<int>price={0};
    int sum=0;
};
bool cmp(box a, box b)
{
    if(a.sum!=b.sum)
    {
        return a.sum<b.sum;
    }
    else if(a.price[a.price.size()-1]!=b.price[b.price.size()-1])
    {
        return a.price[a.price.size()-1]<b.price[b.price.size()-1];
    }
    else if(a.price[1]!=b.price[1])
    {
        return a.price[1]<b.price[1];
    }
    else
    {
        return a.id<b.id;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    box a[n+1];
    for(int i=1;i<=n;i++)
    {
        a[i].id=i;
        for(int j=0;j<k;j++)
        {
            int temp;
            cin>>temp;
            a[i].price.push_back(temp);
            a[i].sum+=temp;
        }
        sort(a[i].price.begin(),a[i].price.end());

    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<a[i].id<<" ";
    }
    return 0;
}