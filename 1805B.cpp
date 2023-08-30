#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(int a, string &c){
    char temp = c[0];
    int pos = 0;

    for(int i=0; i<a; i++){
        if(c[i] <= temp){
            temp = c[i];
            pos = i;
        }
    }

    c.erase(pos, 1);
    c = temp + c;
    
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        string c;
        cin>>s >>c;
        lulu(s, c);
        cout<<c <<endl;
    }
}