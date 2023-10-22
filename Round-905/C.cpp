#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<endl;
#define pb push_back
int mod = 1e9+7;

const int INF = 1e18;

void solve()
{

    int n;
    int k;
    cin>>n>>k;
    map<int, int>mp;

    int a[n];
    int ans=mod;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]%k]++;
        int r=a[i]%k;
        r=k-r;
        if(a[i]%k==0)
        {
            ans=0;
        }
        else
        {
            ans=min(ans, r);
        }


    }
    if(k==4)
    {
        if(mp[1]>1)
        {
            ans=min(ans, (int)2);
        }
        if(mp[1]>0 && mp[2]>0)
        {
            ans=min(ans, (int)1);
        }
        if(mp[2]>1)
        {
            ans=0;
        }

    }

    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for(int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

