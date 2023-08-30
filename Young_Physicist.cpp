#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][3];

    for(int i=0; i<n; i++){
        for(int l=0; l<3; l++){
            cin>>arr[i][l];
        }
    }
    
    int fst=0, chk=0;

    for(int i=0; i<3; i++){
        for(int l=0; l<n; l++){
            fst += arr[l][i];
        }
        if(fst!=0){
            chk=1;
            break;
        }
    }
    if(chk==0) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
    
}