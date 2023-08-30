#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    string line;
    getline(cin, line);
    int arr[26]={0};
    for(int i=0; i<line.length(); i++) if(line[i]>='a' && line[i]<='z') arr[line[i]-97]++;
    int count=0;
    for(int i=0; i<26; i++) if(arr[i]>0)count++;
    cout<<count <<endl;
}