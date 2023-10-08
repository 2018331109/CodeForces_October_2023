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

    int n, p;
    cin >> n >> p;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({b[i], a[i]});
    }

    sort(vp.begin(), vp.end());

    int res = 0, i = 0, t = 0;
    while (i < n && t < n)
    {
        if (i >= t)
        {
            res += p;
            t += 1;
        }

        if (vp[i].first >= p)
        {
            res += p * (n - t);
            break;
        }

        res += min(n - t, vp[i].second) * vp[i].first;
        t += min(vp[i].second, n - t);
        i += 1;
    }

    cout << res << endl;


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


