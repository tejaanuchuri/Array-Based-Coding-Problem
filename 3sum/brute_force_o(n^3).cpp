#include<iostream>
using namespace std;
void three_sum(int arr[10000],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<<"indexes are "<<i<<" "<<j<<" "<<k<<endl;
                }
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