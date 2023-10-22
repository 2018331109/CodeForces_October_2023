#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<endl;
#define pb push_back
int mod = 1e9+7;

const int INF = 1e18;

int call(int n)
{
    int r=0;
    while(n)
    {
        r+=n%10;
        n/=10;
    }
    return r;
}
void solve()
{
    int n, k;
    cin>>n>>k;
    while(true)
    {
        int r=call(n);
        if(r%k==0)
        {
            cout<<n<<endl;
            return;
        }
        else
        {
            n++;
        }
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

