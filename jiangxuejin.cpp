#include <bits/stdc++.h> //奖学金
using namespace std;
struct student
{
    int id;
    int score;
};
bool cmp(student a, student b)
{
    return a.score > b.score;
}
int main()
{
    int n;
    cin >> n;
    student stus[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int chinese, math, english;
        stus[i].id = i;
        cin >> chinese >> math >> english;
        stus[i].score = chinese + math + english;
    }
    sort(stus+1,stus+n+1,cmp);
    for (int i=1;i<=5;i++)
    {
        cout<<stus[i].id<<" "<<stus[i].score<<endl;
    }
    return 0;
}