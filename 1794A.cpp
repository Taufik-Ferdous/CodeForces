#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int s;
        cin>>s;
        s = s*2-2;
        string arr[s];
        for(int i=0; i<s; i++){
            cin>>arr[i];
        }
        
        int count=0;
        for(int i=0; i<s; i++){
            for(int j=0; j<s; j++){
                if(i==j) continue;
                reverse(arr[i].begin(), arr[i].end());
                if(arr[i] == arr[j]) count ++;
                reverse(arr[i].begin(), arr[i].end());
            }
        }

        if(count == s) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}