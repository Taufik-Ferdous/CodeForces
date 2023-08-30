#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];

    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }

    int ck=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
        if(arr[i][j]==1){
            i++;
            j++;
            ck=1;
            break;
        }
        }
        if(ck==1){
            break;
        }
    }

    int ans;
    if(i>3){
        i = i-3;
    }
    else if(i<3){
        i = 3-i;
    }
    else if(i==3){
        i = 0;
    }

    if(j>3){
        j = j-3;
    }
    else if(j<3){
        j = 3-j;
    }
    else if(j==3){
        j = 0;
    }

    ans=i+j;
    cout<<ans;
    return 0;
}