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
    int n, m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;
    char st=t[0], et=t[m-1];
    int f=0;
    for(int i=0; i<m-1; i++)
    {
        if(t[i]==t[i+1])
        {
            f=1;
        }
    }
    int ff=0;
    int fff=0;
    set<char>ss;
    char ch;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            ff=1;
            ch=s[i];
            ss.insert(s[i]);
        }
    }
    if(ff==0)
    {
        yes;
        return;
    }

    if(f==1)
    {
        no;
        return;
    }

    if(st!=et)
    {
        no;
        return;
    }

    if(ss.size()>1)
    {
        no;
        return;
    }

    if(ch==st)
    {
        no;
        return;
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

