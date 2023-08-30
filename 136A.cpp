#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int col;
    cin>>col;
    int arr[2][col];
    for(int i=0; i<col; i++) arr[0][i]=i+1;
    for(int i=0; i<col; i++) cin>>arr[1][i];

    for(int i=1; i<=col; i++){
        for(int j=0; j<col; j++) if(arr[1][j] == i) cout<<j+1;
        if(i<col) cout<<' ';
    }
}