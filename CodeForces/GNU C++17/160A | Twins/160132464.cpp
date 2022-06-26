#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,sum=0,count=0;
    cin>>n;
    long long arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n);
    sum=sum/2;
    int t=0;
 
    for(int i=n-1; i>=0; i--){
        t=t+arr[i];
        count++;
        if (t>sum){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}