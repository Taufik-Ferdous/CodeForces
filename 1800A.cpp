#include<bits/stdc++.h>
using namespace std;

void lulu(string &line){
    transform(line.begin(), line.end(), line.begin(), ::tolower);

    for(int i=0; i<line.length(); i++){
        if(line[i] == line[i+1]){
            line.erase(i,1);
            i--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        string line;
        cin>>s >>line;
        lulu(line);
        
        if(line == "meow") cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
}