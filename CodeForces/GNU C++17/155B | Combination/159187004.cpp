#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool cmp2(const pair<int,int> &a, const pair<int,int> &b)
 { return (a.first>b.first);
 }
int main() {
int n;
cin>>n;
int a[n][2];
std::vector<pair<int,int>> v;
for(int i=0;i<n;i++)
 {cin>>a[i][0]>>a[i][1];
  v.push_back({a[i][0],a[i][1]});}
sort(v.begin(), v.end(),cmp);
int score=0,played=1;
for(int i=0;i<n;i++)
 if(v[i].second>0&&played>0){score+=v[i].first; v[i].first=-1; played--; played+=v[i].second;}
sort(v.begin(), v.end(),cmp2);
for(int i=0;i<n;i++)
 if(v[i].first>=0&&played>0) {score+=v[i].first; v[i].first=-1; played--;}
 cout<<score<<endl;
 
return 0;
 
}