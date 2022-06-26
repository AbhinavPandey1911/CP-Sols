/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k ;
    string s1,s2;
    cin>>s1>>s2;int j=0;
    int cnt1=0,cnt2=0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    std::vector<char>v ;
    for(int i=0;i<n&&j<m;)
    { if((s1[i]>=s2[j]&&(cnt2<k))||cnt1==k) {v.push_back(s2[j]); j++; cnt2++; cnt1=0;}
      else if(cnt1<k||cnt2==k)  {v.push_back(s1[i]); i++; cnt1++; cnt2=0;}
        
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i];
    cout<<endl;
    }
 
    return 0;
}