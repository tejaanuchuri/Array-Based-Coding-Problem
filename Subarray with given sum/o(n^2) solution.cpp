#include<iostream>
using namespace std;
bool subarray_sum(int arr[10000],int n,int sum){
    for(int i=0;i<n;i++){
        int cur_sum = arr[i];
        for(int j=i+1;j<n;j++){
            if(cur_sum==sum){
                cout<<i<<"index to "<<j-1<<" index"<<endl;
                return true;
            }

            if(cur_sum>sum || j==n)
                break;

            cur_sum = arr[j] + cur_sum;
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