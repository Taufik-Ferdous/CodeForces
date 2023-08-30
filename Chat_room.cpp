#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>> str;
            //  ahhellllloou
            //           o
    string text = "hello";
    int point = 0;
    

    for(int i = 0; i < str.length() && point <= text.length(); i++){
        if(text[point] == str[i]){
            point++;
        }else{
            if(i == 0) continue;
            if(str[i] != str[point-1]){
                cout<<"NO\n";
                break;
            }
        }
    }
    
    if(point == text.length()){
        cout<<"YES\n";
    }else{
        cout<< "NO\n";
    }

   
    return 0;
}