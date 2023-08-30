#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    string line;
    cin>>line;
    vector<int> q1, q2, a;
    for(int i=0; i<line.length(); i++){
        if(line[i]=='Q'){
            q1.push_back(i+1);
            q2.push_back(i+1);
        }
        else if(line[i]=='A'){
            a.push_back(i+1);
        }
    }
    long long int count=0;
    for(int i=0; i<q1.size(); i++){
        for(int j=0; j<a.size(); j++){
            for(int k=0; k<q2.size(); k++){
                if(q1[i]>a[j] && a[j]>q2[k]) count++;
            }
        }
    }
    cout<<count <<endl;
}