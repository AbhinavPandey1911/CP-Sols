#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int *arr=new long long int[n];
    long long int *arr1=new long long int[n];
    long long int *arr2=new long long int[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        arr1[i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr1[i]==arr[j]){
                    arr2[i]=j;
                    break;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
    