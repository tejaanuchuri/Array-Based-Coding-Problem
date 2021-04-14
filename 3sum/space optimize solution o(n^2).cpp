#include<bits/stdc++.h>
using namespace std;
void three_sum(int arr[10000],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==0){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                l++;
                r--;
            }else if(arr[i]+arr[l]+arr[r]<0){
                l++;
            }else{
                r--;
            }
        }
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    three_sum(arr,n);
    return 0;
}