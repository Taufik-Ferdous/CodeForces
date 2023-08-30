#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num, count=0;
    cin>>n >>num;

    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]>=arr[num-1] && arr[i]>0){
            count++;
        }
    }
    cout<<count <<endl;
    return 0;
}