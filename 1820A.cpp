#include<bits/stdc++.h>
using namespace std;

void lulu(string a){
    int count=0;
    int len=a.length();
    for(int i=0; i<len; i++){
        if(a[i]=='_' && (a[i-1]!='^' || i==0)) count++;
    }
    if((len>=1) && (a[len-1])=='_') count++;
    if(len==1 && a[0]=='^') count++;

    cout<<count <<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string in;
        cin>>in;
        lulu(in);
    }
}