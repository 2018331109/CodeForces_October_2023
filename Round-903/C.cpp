#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<end;
#define pb push_back

void solve()
{
    int n, res=0;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int ans=0;
    for(int i=0; i<(n/2); i++)
    {
        for(int j=0; j<(n/2); j++)
        {
            char ch='1';
            char a, b, c, d;
            a=v[i][j];
            ch=max(ch, a);
            b=v[j][n-i-1];
            ch=max(ch, b);
            c=v[n-j-1][i];
            ch=max(ch, c);
            d=v[n-i-1][n-j-1];
            ch=max(ch, d);
            ans+=(4*ch-a-b-c-d);
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

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

