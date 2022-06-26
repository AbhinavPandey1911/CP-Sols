 
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int >&a, pair <int ,int>&b)
{
   return (a.second>b.second);
 
}
int main() {
    // Write C++ code here  
    int n;
    cin>>n;
    int a[9];
    std::vector<pair<int,int>> v;
    int small=INT_MAX; int num=0;
    for(int i=0;i<9;i++)
        { cin>>a[i]; v.push_back({i+1,a[i]});
          if(small>=a[i]) {small=a[i]; num=i;}
         }
 
   if(n<small) {cout<<"-1\n"; return 0;}
 int k=n/small;
 int rem=n%small;
  string s;
   for(int i=0;i<k;i++)
     s+=(num+1+'0');
 //cout<<s<<endl;
 //cout<<rem<<endl;
  for(int i=0;i<s.size();i++)
   if(rem>0){
   for(int j=v.size()-1;j>=0;j--)
    { //cout<<j<<endl;
    if((a[s[i]-'0'-1]+rem)>=v[j].second&&v[j].first>s[i]-'0')
        { 
            rem=rem-(v[j].second-a[s[i]-'0'-1]);
            s[i]=(v[j].first+'0');
              //cout<<rem<<endl;
              break;
             
        }
    //cout<<rem<<endl;
    }
    }
 
cout<<s<<endl;
 
 //for(int i=0;i<9;i++)
   
  
 
 
 
 
    return 0;
 
}