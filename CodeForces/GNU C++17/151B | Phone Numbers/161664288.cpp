 
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int >&a, pair <int ,int>&b)
{
   return (a.second>b.second);
 
}
struct person{
   int no_of_contacts;
   string name;
   string s[10000];
 
};
int main() {
    // Write C++ code here  
       // freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
int n;
cin>>n;
person p[n];
int count[n][3];
for(int i=0;i<n;i++)
    for(int j=0;j<3;j++)
        count[i][j]=0; // 0 for pizza 1 for taxi 2 for girls
 
for(int i=0;i<n;i++)
 { cin>>p[i].no_of_contacts>>p[i].name;
    for(int j=0;j<p[i].no_of_contacts;j++)
    {     char last1='a';
        cin>>p[i].s[j];
        char last2=p[i].s[j][0];
        int flag1=0,flag2=0,flag3=0;
      for(int k=0;k<=p[i].s[j].size()-2;k+=3)
      { 
        if(p[i].s[j][k]>p[i].s[j][k+1]&&p[i].s[j][k]<last1)
             {flag1=1;
                last1=p[i].s[j][k+1];
 }
        else if(p[i].s[j][k]==p[i].s[j][k+1]&&p[i].s[j][k]==last2)
            { flag2=1; //cout<<k<<" ";// cout<<p[i].s[j][k]<<endl;
 
         }
        else flag3=1;
        
      }
     if(flag1==1&&flag2!=1&&flag3!=1) count[i][0]++;
     else if(flag2==1&&flag1!=1&&flag3!=1) count[i][1]++;
     else count[i][2]++;
    }
 
 }
// for(int i=0;i<n;i++)
 //   cout<<count[i][0]<<" "<<count[i][1]<<" "<<count[i][2]<<endl;
 
 int max1=count[0][0],max2=count[0][1],max3=count[0][2];
 std::vector<string> v[3];
 for(int i=0;i<n;i++)
 { if(max1<count[i][0]){
         v[0].clear();
         max1=count[i][0];
         v[0].push_back(p[i].name);
   }
   else if(max1==count[i][0]){
     v[0].push_back(p[i].name);
   }
 
 if(max2<count[i][1]){
    v[1].clear();
         max2=count[i][1];
         v[1].push_back(p[i].name);
 }
 else if(max2==count[i][1]){
    v[1].push_back(p[i].name);
 }
 
  if(max3<count[i][2]){
    v[2].clear();
         max3=count[i][2];
         v[2].push_back(p[i].name);
 }
 else if(max3==count[i][2]){
    v[2].push_back(p[i].name);
 }
 }
 string disp[3];
 disp[0]="If you want to call a taxi, you should call:";
 disp[1]="If you want to order a pizza, you should call:";
 disp[2]="If you want to go to a cafe with a wonderful girl, you should call:";
 cout<<disp[0];
 for(int i=0;i<v[1].size();i++)
   {
    if(i!=v[1].size()-1) cout<<" "<<v[1][i]<<",";
    else cout<<" "<<v[1][i]<<".";
}
cout<<endl;
 cout<<disp[1];
 for(int i=0;i<v[0].size();i++)
   {
    if(i!=v[0].size()-1) cout<<" "<<v[0][i]<<",";
    else cout<<" "<<v[0][i]<<".";
}
 cout<<endl;
 cout<<disp[2];
 for(int i=0;i<v[2].size();i++)
   {
    if(i!=v[2].size()-1) cout<<" "<<v[2][i]<<",";
    else cout<<" "<<v[2][i]<<"." ;
}
 
cout<<endl;
 
 
 
 
    return 0;
 
}