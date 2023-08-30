//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ol, ll, lo;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int s;
            string a;
            cin >> s >> a;
            if (a == "11")
                ll.push_back(s);
            else if (a == "10")
                lo.push_back(s);
            else if (a == "01")
                ol.push_back(s);
        }

        sort(ol.begin(), ol.end());
        sort(lo.begin(), lo.end());
        sort(ll.begin(), ll.end());

        if(lo[0]!=0 and ol[0]!=0 and ll[0]!=0){
            if ((lo[0]+ol[0]) > ll[0]) cout<<ll[0] <<endl;
            else cout<<lo[0]+ol[0] <<endl;
        }

        //else if (ll[0]==0 and (lo[0]==0 or ol[0]==0)) cout<<-1 <<endl;
        
        else if(ll[0]!=0 and (lo[0]==0 or ol[0]==0)) cout<<ll[0] <<endl;

        else if (ll[0]==0 and lo[0]!=0 and ol[0]!=0) cout<<lo[0]+ol[0] <<endl;

        else cout<<-1 <<endl;

        ll.clear();
        lo.clear();
        ol.clear();
    }
}