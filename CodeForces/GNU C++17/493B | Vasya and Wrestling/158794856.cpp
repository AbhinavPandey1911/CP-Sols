#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
        srand(time(0));
int n;
cin>>n;
long long a[n],max1=INT_MIN,max2=INT_MIN;
long long sum1=0,sum2=0,l1,l2;
std::vector<long long> v,v1;
for(long long i=0;i<n;i++)
   { cin>>a[i]; 
    a[i]>0?sum1+=a[i]:sum2+=a[i];
    if(a[i]<0&&abs(a[i])>max2) max2=abs(a[i]);
    else if(a[i]>0&&a[i]>max1) max1=a[i];
    a[i]>0?l1=a[i]:l2=a[i];
    if(a[i]<0) v.push_back(abs(a[i]));
    else v1.push_back(a[i]);
 
}
sum2=abs(sum2);
long long g=a[n-1];
 if(sum1>abs(sum2)) cout<<"first\n";
 else if(abs(sum2)>sum1) cout<<"second\n";
 else if(sum1==sum2){
        long long j=0;
        int flag=-1;
        for(long long i=0;i<v1.size();i++)
           { if(j>n-1) break;
            if(v1[i]>v[j]) {flag=0; break;}
           else if(v[j]>v1[i]) {flag=1; break;}
            else {j++; continue;}
        }
        if(flag==0) cout<<"first\n";
        else if(flag==1) cout<<"second\n";
 
            else {
                 if(g>0) cout<<"first\n";
                 else cout<<"second\n";
            }
 
 
    
 }
 
 
 
 
return 0;
 
}