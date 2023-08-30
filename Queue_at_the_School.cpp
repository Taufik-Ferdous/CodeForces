#include<bits/stdc++.h>
using namespace std;

void ans(string &a, int sz, int time){
    while(time--){
        for(int i=0; i<sz-1; i++)
            if(a[i]=='B' && a[i+1]=='G'){
                swap(a[i], a[i+1]);
                i++;
            }
    }
}

int main(){
    int sz, time;
    string lin;
    cin>>sz >>time >>lin;
    ans(lin, sz, time);
    cout<<lin <<endl;
}