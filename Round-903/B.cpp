#include<bits/stdc++.h>
using namespace std;
#define int long long

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pb push_back

void solve()
{
    vector<int>v;
    for(int i=0; i<3; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int cnt=0;
    sort(v.begin(), v.end());
    while(v[v.size()-1]>v[0])
    {
        v[v.size()-1]-=v[0];
        v.pb(v[0]);
        cnt++;
        if(cnt>3)
        {
            no;
            return;
        }
        sort(v.begin(), v.end());
    }
    yes;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

