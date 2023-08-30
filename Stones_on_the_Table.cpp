#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string in;
    cin>>in;

    int count = 0;
    for(int i=0; i<n-1; i++){
        if(in[i] == in[i+1])
            count++;
    }
    cout<<count;
    return 0;
}