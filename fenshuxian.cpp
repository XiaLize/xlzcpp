#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#define el "\n"
using namespace std;
struct zyz
{
	int k;
	int s;
};
bool cmp(zyz a,zyz b)
{
	if (a.s != b.s) return a.s > b.s;
	return a.k < b.k;
}
int main()
{
	int n,m,z=0,mubiaofen;
	cin>>n>>m;
	mubiaofen=floor(m*1.5);
	vector<zyz>a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].k>>a[i].s;
	}
	sort(a.begin()+1,a.begin()+1+n,cmp);
	int x=a[mubiaofen].s;
	cout<<x<<" ";
	for(int i=1;i<=n;i++)
	{
		if(a[i].s>=x)
		{
			z++;
		}
	}
	cout<<z<<el;
	for(int i=1;i<=n;i++)
	{
		if(a[i].s>=x)
		{
			cout<<a[i].k<<" "<<a[i].s<<el;
		}
	}
	return 0;
}
