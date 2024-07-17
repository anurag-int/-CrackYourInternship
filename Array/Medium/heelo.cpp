
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        int b;
        
        cin >> a;
        cin >> b;
        
        int ans = 0;
        
        
        for(int i=1; i<=b; i++)
        {
            ans = ans + pow(2, i);
        }
        
        cout << ans << endl;
        
    }

    return 0;
}

3
2 2
2 4
