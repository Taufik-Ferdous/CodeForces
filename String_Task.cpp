#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    cin >> line;

    transform(line.begin(), line.end(), line.begin(), ::tolower);

    for (int i = 0; i < line.length(); i++)
    {
        if (!(line[i] == 'a' || line[i] == 'e' ||
            line[i] == 'i' || line[i] == 'o' ||
            line[i] == 'u' || line[i] == 'y'))
        {
            cout<<'.' <<line[i];
        }
    }
    
    return 0;
}