#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define el "\n"
using namespace std;
struct sb
{
	string s;
	int p;
	int v;
};
bool cmp(sb a,sb b)
{
	if(a.v!=b.v)
	{
		return a.v<b.v;
	}
	else if(a.p!=b.p)
	{
		return a.p<b.p;
	}
	else
	{
		return a.s<b.s;
	}
}
int main()
{
	int m, n;
	cin>>m>>n;
	sb a[n+1];
	vector<string>ans;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].s>>a[i].p>>a[i].v;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		if(a[i].p<=m)
		{
			ans.push_back(a[i].s);
			m-=a[i].p;
		}
		else continue;
		
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
        cout<<ans[i]<<el;
	}
	return 0;
}
