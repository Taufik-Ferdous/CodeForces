#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        int arr[s];

        for(int i=0; i<s; i++) cin>>arr[i];

        sort(arr, arr+s);

        int sum=0;

        if(s<2) cout<<0 <<endl;
        else{
        for(int i=0, j=s-1; i<s/2; i++, j--) sum += (arr[j]-arr[i]);
        cout<<sum <<endl;
        }
    }
}