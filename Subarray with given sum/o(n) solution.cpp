#include<iostream>
using namespace std;
bool subarray_sum(int arr[10000],int n,int sum){
    int cur_sum = arr[0];
    int start=0;
    for(int i=1;i<=n;i++){

        while(cur_sum>sum && start<i-1){
            cur_sum = cur_sum - arr[start++];
        }

        if(cur_sum==sum){
            cout<<"Index found between "<<start<<" and "<<i-1<<endl;
            return true;
        }
        if(i<n){
            cur_sum = cur_sum + arr[i];
        }
        
    }
    cout<<"No subbary";
    return false;
}
int main(){
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cin>>sum;
    if(subarray_sum(arr,n,sum))
        cout<<"Found"<<endl;
    else   
        cout<<"Not Found"<<endl;
    return 0;
}