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
    string s;
    cin>>s;
    int ans=0;
    map<char, int>mp;
    mp['0']=10;
    for(char i='1'; i<='9'; i++)
    {
        mp[i]=i-'0';
        //cout<<mp[i]<<endl;
    }

    int pos=1;
    for(auto it:s)
    {
        ans+=abs((mp[it])-pos)+1;
        pos=mp[it];
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

