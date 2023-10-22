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
    int k;
    int n;
    cin>>n>>k;
    cin>>s;
    vector<int>v(26, 0);
    for(auto it:s)
    {
        v[it-'a']++;
    }
    int cnt=0;
    for(auto it:v)
    {
        if(it%2)
        {
            cnt++;
        }
    }

    /*
    if(k%2)
    {
        if(cnt-k>1)
        {
            no;
            return;
        }
        else
        {
            yes;
            return;
        }
    }
    else
    {
        if(cnt-k>1)
        {
            no;
            return;
        }
        else
        {
            yes;
        }
    }

    */

    if(cnt-k>1)
    {
        no;
        return;
    }
    else
    {
        yes;
    }
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

