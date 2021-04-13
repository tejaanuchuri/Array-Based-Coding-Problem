#include<iostream>
#include<unordered_map>
using namespace std;
bool subarray_sum(int arr[10000],int n,int sum){
    unordered_map<int,int> m;
    int cur_sum = 0;
    for(int i=0;i<n;i++){

        cur_sum = cur_sum + arr[i];

        if(cur_sum==sum){
            cout<<"Sum found between 0"<<" and "<<i<<endl;
            return true;
        }

        if(m.find(cur_sum-sum)!=m.end()){
            cout<<"Subarray found between "<<m[cur_sum-sum]+1<<" and "<<i<<endl;
            return true;
        }
        m[cur_sum] = i;
        
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