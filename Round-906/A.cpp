#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;



void solve()
{
    int n;
    cin>>n;
    unordered_map<int, int>mp;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }

    //cout<<mp.size()<<endl;

    if(mp.size()>2)
    {
        no;
        return;
    }

    if(mp.size()==1)
    {
        yes;
        return;
    }
    int a=0, b=0, k=0;

    for(auto it:mp)
    {
        if(k==0)
        {
            a=it.second;
            k++;
        }
        else
        {
            b=it.second;
        }
    }

    if(abs(a-b)<=1)
    {
        yes;
        return;
    }
    no;


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

