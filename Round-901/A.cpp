#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (1 + v[i] > a)
        {
            sum += a-1;
        }
        else
        {
            sum += v[i];
        }
    }

    cout << sum + b << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test=1;
    cin>>test;
    for(int tC=1; tC<=test; tC++)
    {
        solve();
    }

}


