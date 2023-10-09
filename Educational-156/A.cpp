#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;


void solve()
{
    int n;
    cin >> n;

    int res = n - 1 - 2;
    if (res > 0 && res % 3 != 0 && res != 1 && res != 2)
    {
        yes;
        cout << "1 2 " << n - 3 << endl;
    }
    else
    {
        res = n - 1 - 4;
        if (res > 0 && res % 3 != 0 && res != 1 && res != 4)
        {
            yes;
            cout << "1 4 " << n - 5 << endl;
        }
        else
        {
            res = n - 1 - 5;
            if (res > 0 && res % 3 != 0 && res != 1 && res != 5)
            {
                yes;
                cout << "1 5 " << n - 6 << endl;
            }
            else
            {
                no;
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test=1;
    cin>>test;
    for(int tc=1; tc<=test; tc++)
    {
        solve();
    }

}


