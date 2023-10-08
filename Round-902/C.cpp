#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;


void solve()
{

    int n, m, k;
    cin >> n >> m >> k;

    if (k == 1)
    {
        cout << 1 << endl;
    }
    else if (k == 2)
    {
        cout << min(n, m) + max(n, m) / n - (int)1 << endl;
    }
    else if (k == 3)
    {
        cout << max((int)0, m - n) - (max(n, m) / n - (int)1) << endl;
    }
    else
    {
        cout << 0 << endl;
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


