#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(long long int s){
    if((s/100) == 0)
        cout<<(s%10) <<endl;
    
    else{
        vector <int> vec;
        while(s!=0){
            int a = s%10;
            vec.push_back(a);
            s/=10;
        }
        sort(vec.begin(), vec.end());
        cout<<vec.front() <<endl;
    }

}

int main(){
    int n;
    cin>>n;
    while (n--){
        long long int s;
        cin>>s;
        lulu(s);
    }
}