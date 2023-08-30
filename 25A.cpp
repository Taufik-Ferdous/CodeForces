#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int even=0, odd=0;
    int pos_e=-1, pos_o=-1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2 == 0){
            even++;
            pos_e=i+1;
        }
        else{
            odd++;
            pos_o=i+1;
        }
    }
    if(even>odd) cout<<pos_o <<endl;
    else cout<<pos_e <<endl;
}