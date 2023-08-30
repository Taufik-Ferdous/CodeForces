#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin>>name;
    if(name.size()==1) cout<<"IGNORE HIM!" <<endl;
    else{
        int count=0;
        for(int i=0; i<name.size(); i++){
            int ck=0;
            for(int j=i+1; j<name.size(); j++){
                if(name[i] == name[j]){
                    ck=1;
                    break;
                }
            }
            if(ck==0) count++;
            else ck=0;
        }
        if(count%2==0) cout<<"CHAT WITH HER!" <<endl;
        else cout<<"IGNORE HIM!" <<endl;
    }
}