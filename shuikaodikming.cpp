#include<iostream>
#include<vector>
#include<algorithm>
#define el "\n"
using namespace std;
struct student{
	string id;
	double score;
};
bool cmp(student a,student b)
{
	return a.score>b.score;
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<student>a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].id>>a[i].score;
	}
	sort(a.begin()+1,a.begin()+1+n,cmp);
	cout<<a[k].id<<" "<<a[k].score;
	return 0;
}
