#include<iostream>
#include<unordered_set>
using namespace std;
void three_sum(int arr[10000],int n){
    for(int i=0;i<n-1;i++){
        unordered_set<int> s;
        for(int j=i+1;j<n;j++){
            int x = -(arr[i]+arr[j]);
            if(s.find(x)!=s.end()){
                cout<<"the values are "<<x<<" "<<arr[i]<<" "<<arr[j]<<endl;
            }else{
                s.insert(arr[j]);
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