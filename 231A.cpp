/*

#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][3];

    for(int i=0; i<n; i++) for(int j=0; j<3; j++) cin>>arr[i][j];
    int ans=0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<3; j++) count += arr[i][j];
        if(count>1) ans++;
    }
    cout<<ans <<endl;
}

*/



#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0; i<n; i++){
        int a, b, c;
        cin>>a >>b >>c;
        if((a+b+c)>1) count++;
    }
    cout<<count <<endl;
}