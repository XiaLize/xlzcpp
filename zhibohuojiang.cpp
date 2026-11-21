#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define el "\n"
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,w;
	cin>>n>>w;
	int s[601]={};
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>> a;
		int k=max(1,(i*w)/100);
		s[a]++;
		int temp=0;
		for(int j=600;j>=0;j--)
		{
			temp+=s[j];
			if(temp>=k)
			{
				cout<<j<<" ";
				break;
			}
		}
	}
	return 0;
}
