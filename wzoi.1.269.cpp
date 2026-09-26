#include<bits/stdc++.h>
using namespace std;

struct bingrenxinx
{
    string id;
    int age;
};

bool cmp(const bingrenxinx& a, const bingrenxinx& b)
{
    if(a.age >= 60 && b.age < 60)
    {
        return true;
    }
    if(a.age < 60 && b.age >= 60)
    {
        return false;
    }
    if(a.age >= 60 && b.age >= 60)
    {
        return a.age > b.age;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    bingrenxinx* a = new bingrenxinx[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].id>>a[i].age;
    }
    stable_sort(a, a+n, cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].id<<endl;
    }
    delete[] a;
}